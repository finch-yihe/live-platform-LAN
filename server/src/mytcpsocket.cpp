#include "mytcpsocket.h"
#include "server.h"

MyTcpSocket::MyTcpSocket(QAbstractSocket *parent)
	: name(""), room(""), port(0) {
	connect(this, SIGNAL(readyRead()), this, SLOT(data_handle()));
	connect(this, SIGNAL(disconnected()), this, SLOT(break_handle()));
}

MyTcpSocket::~MyTcpSocket() = default;

void MyTcpSocket::data_handle() {
	QByteArray recv_data = readAll();
	QByteArray send_data;
	QList<QByteArray> recv = recv_data.split('\n');
	switch (recv[0].toInt()) {
		case Type::REGISTER:
				qDebug() << "注册：" << recv_data;
			send_data.append(Type::REGISTER + 48);
			send_data.append("\n");
			if (MyDatabase::get_instance().has_user_id(recv[1].toStdString().data())) {
				send_data.append(Status::WARN + 48);
			} else {
				if (MyDatabase::get_instance().has_mail(recv[5].toStdString().data())) {
					send_data.append(Status::EMAIL + 48);
				} else {
					if (MyDatabase::get_instance().regist(recv[1].toStdString().data(),
					                                      recv[2].toStdString().data(),
					                                      recv[3].toStdString().data(),
					                                      recv[4].toStdString().data(),
					                                      recv[5].toStdString().data(),
					                                      recv[6].toStdString().data())) {
						send_data.append(Status::OK + 48);
					} else {
						send_data.append(Status::ERROR + 48);
					}
				}
			}
			send_data.append("\n");
			write(send_data);
			flush();
			break;
		case Type::SIGNIN:
			qDebug() << "登录：" << recv_data;
			send_data.append(Type::SIGNIN + 48);
			send_data.append("\n");
			if (MyDatabase::get_instance().has_user_and_passwd(recv[1].toStdString().data(), recv[2].toStdString().data())) {
				if (Server::get_instance().get_tcp_server().is_online(recv[1])) {
					send_data.append(Status::WARN + 48);
				} else {
					Server::get_instance().get_tcp_server().sign_in(recv[1], this);
					send_data.append(Status::OK + 48);
					send_data.append('\n');
					send_data.append(QString(std::string(std::to_string(MyDatabase::get_instance().get_score(recv[1]))).data()));
				}
			} else {
				send_data.append(Status::ERROR + 48);
			}
			send_data.append("\n");
			write(send_data);
			flush();
			break;
		case Type::CHANGEROOM:
			qDebug() << "房间：" << recv_data;
			Server::get_instance().get_tcp_server().change_room(this, recv[1].data());
			break;
		case Type::QUIT:
			qDebug() << "退出：" << recv_data;
			Server::get_instance().get_tcp_server().quit_sign(this);
			Server::get_instance().get_tcp_server().get_number();
			break;
		case Type::CODE:
			qDebug() << "验证：" << recv_data;
			send_data.append(Type::CODE + 48);
			send_data.append('\n');
			if (recv[1].toInt() == Step::ONE) {
				send_data.append(Step::ONE + 48);
				send_data.append('\n');
				if (MyDatabase::get_instance().has_mail(recv[2].toStdString().data())) {
					QString code = GENERATE_VERIFICATION_CODE();
					Server::get_instance().get_tcp_server().add_code(QString(recv[2].toStdString().data()), code);
					send_data.append(Status::OK + 48);
					CSocket(recv[2].toStdString(), code.toStdString()).send_code();
				} else {
					send_data.append(Status::ERROR + 48);
				}
			} else if (recv[1].toInt() == Step::TWO) {
				send_data.append(Step::TWO + 48);
				send_data.append('\n');
				if (Server::get_instance().get_tcp_server().compare_code(recv[2].toStdString().data(), recv[3].toStdString().data())) {
					send_data.append(Status::OK + 48);
				} else {
					send_data.append(Status::ERROR + 48);
				}
			} else if (recv[1].toInt() == Step::THREE) {
				send_data.append(Step::THREE + 48);
				send_data.append('\n');
				if (MyDatabase::get_instance().change_passwd(recv[2], recv[3])) {
					send_data.append(Status::OK + 48);
				} else {
					send_data.append(Status::ERROR + 48);
				}
			}
			send_data.append('\n');
			write(send_data);
			flush();
			break;
		case Type::REFRESH:
			qDebug() << "更新：" << recv_data;
			if (recv[1].toInt() == Step::ONE) {
				write(Server::get_instance().get_tcp_server().get_room_list());
				flush();
			} else {
				write(Server::get_instance().get_tcp_server().get_parters_list(this->get_room()));
				flush();
			}
			break;
		case Type::FORWARD:
			qDebug() << "转发：" << recv_data;
			Server::get_instance().get_tcp_server().forward_data(recv_data);
			break;
		case Type::TOPUP:
			qDebug() << "充值：" << recv_data;
			MyDatabase::get_instance().add_score(recv[1], recv[2]);
			break;
		case Type::GIFT:
			qDebug() << "礼物：" << recv_data;
			MyDatabase::get_instance().add_score(this->get_name().toStdString().data(),
			                                     std::to_string(0 - gift_integral[recv[1].toInt()]).data());
			MyDatabase::get_instance().add_score(this->get_room().toStdString().data(),
			                                     std::to_string(gift_integral[recv[1].toInt()]).data());
			Server::get_instance().get_tcp_server().send_gift(this, recv[1]);
			Server::get_instance().get_tcp_server().update_integral(this->get_room());
			break;
		default: break;
	}
}

void MyTcpSocket::set_name(const QString &name_) {
	this->name = name_;
}

void MyTcpSocket::set_room(const QString &room_) {
	this->room = room_;
}

void MyTcpSocket::set_port(const qint16 &port_) {
	this->port = port_;
}

qint16 MyTcpSocket::get_port() const {
	return port;
}

QString MyTcpSocket::get_name() const {
	return name;
}

QString MyTcpSocket::get_room() const {
	return room;
}

void MyTcpSocket::break_handle() {
	Server::get_instance().get_tcp_server().remove_socket(this);
	Server::get_instance().get_tcp_server().get_number();
}
