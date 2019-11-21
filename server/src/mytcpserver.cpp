#include "mytcpserver.h"
#include <iostream>
using namespace std;

MyTcpServer::MyTcpServer() {
	for (qint16 i = 8000; i < 8500; i++)
		m_ports.enqueue(i);
}

void MyTcpServer::incomingConnection(qintptr socketDescriptor) {
	auto socket = new MyTcpSocket;
	socket->setSocketDescriptor(socketDescriptor);
	m_vec.push_back(socket);
}

void MyTcpServer::remove_socket(MyTcpSocket *socket) {
	if (m_list.contains(socket)) {
		quit_sign(socket);
	}
	if (m_code.contains(socket->get_name())) {
		m_code.remove(socket->get_name());
	}
	m_vec.removeOne(socket);
}

void MyTcpServer::sign_in(const QString &name, MyTcpSocket *socket) {
	for (auto &item:m_vec) {
		if (item == socket) {
			item->set_name(name);
			m_list.push_back(socket);
			return;
		}
	}
}

bool MyTcpServer::is_online(const QString &name) {
	for (auto &item:m_list) {
		if (item->get_name() == name) {
			return true;
		}
	}
	return false;
}

void MyTcpServer::quit_sign(MyTcpSocket *socket) {
	if (socket->get_room() != "") {
		nodify_del_member(socket->get_name(), socket->get_room());
	}
	m_list.removeOne(socket);
	if (socket->get_room() != "") {
		m_room[socket->get_room()].remove(socket);
		if (m_room[socket->get_room()].isEmpty()) {
			m_room.remove(socket->get_room());
			m_ports.enqueue(socket->get_port());
			nodify_del_room(socket->get_room());
		}
	}
	socket->set_name("");
	socket->set_room("");
	socket->set_port(0);
}

void MyTcpServer::add_code(const QString &mail, const QString &code) {
	m_code.insert(mail, code);
}

bool MyTcpServer::compare_code(const QString &mail, const QString &code) {
	return m_code[mail] == code;
}

QByteArray MyTcpServer::get_room_list() {
	QByteArray data;
	data.append(Type::REFRESH + 48);
	data.append('\n');
	if (m_room.empty()) {
		data.append(Status::ERROR + 48);
		data.append('\n');
	} else {
		data.append(Status::OK + 48);
		data.append('\n');
		for (auto it = m_room.begin(); it != m_room.end(); it++) {
			if (!m_room[it.key()].isEmpty()) {
				data.append(it.key());
				data.append('\n');
				data.append(std::to_string(it.value().begin().operator*()->get_port()).data());
				data.append('\n');
			}
		}
	}
	return data;
}

void MyTcpServer::change_room(MyTcpSocket *socket, const QString &room) {
	if (socket->get_name() == room) {
		if (m_room.contains(socket->get_name())) {
			m_room[room].insert(socket);
			socket->set_port(m_room[room].begin().operator*()->get_port());
		} else {
			m_room[room].insert(socket);
			socket->set_port(m_ports.dequeue());
			nodify_new_room(room);
		}
	} else {
		if (socket->get_room() == "") {
			m_room[room].insert(socket);
			socket->set_port(m_room[room].begin().operator*()->get_port());
		} else {
			m_room[socket->get_room()].remove(socket);
			if (m_room[socket->get_room()].isEmpty()) {
				m_room.remove(socket->get_room());
				m_ports.enqueue(socket->get_port());
				nodify_del_room(socket->get_room());
			}
			m_room[room].insert(socket);
		}
	}
	if (socket->get_room() != "") {
		if (m_room.contains(socket->get_room())) {
			nodify_del_member(socket->get_name(), socket->get_room());
		}
	}
	nodify_new_member(socket->get_name(), room);
	socket->set_room(room);
}

void MyTcpServer::forward_data(const QByteArray &data) {
	QList<QByteArray> recv = data.split('\n');
	for (const auto &item:m_room[QString(recv[2].data())]) {
		item->write(data);
		item->flush();
	}
}

void MyTcpServer::get_number() {
	qDebug() << "当前连接客户" << m_vec.count();
	qDebug() << "当前在线用户" << m_list.count();
	qDebug() << "当前房间:" << m_room.count();
	for (auto &item:m_room.keys()) {
		cout << item.toStdString() << ":";
		for (auto &it : m_room[item]) {
			cout << it->get_name().toStdString() << " ";
		}
		cout << endl;
	}
}

void MyTcpServer::nodify_del_room(const QString &room) {
	QByteArray data;
	data.append(Type::REFRESH + 48);
	data.append('\n');
	data.append(Status::DEL + 48);
	data.append('\n');
	data.append(room);
	data.append('\n');
	for (auto &item:m_list) {
		item->write(data);
		item->flush();
	}
}

void MyTcpServer::nodify_new_room(const QString &room) {
	QByteArray data;
	data.append(Type::REFRESH + 48);
	data.append('\n');
	data.append(Status::ADD + 48);
	data.append('\n');
	data.append(room);
	data.append('\n');
	data.append(std::to_string(m_room[room].begin().operator*()->get_port()).data());
	data.append('\n');
	for (auto &item:m_list) {
		item->write(data);
		item->flush();
	}
}

QByteArray MyTcpServer::get_parters_list(const QString &room) {
	QByteArray data;
	data.append(Type::REFRESH + 48);
	data.append('\n');
	data.append(Status::EMAIL + 48);
	data.append('\n');
	int size = m_room[room].size();
	QString size_ = std::to_string(size).data();
	data.append(size_);
	data.append('\n');
	for (const auto &item:m_room[room]) {
		data.append(item->get_name());
		data.append('\n');
	}
	return data;
}

void MyTcpServer::send_gift(MyTcpSocket *socket, const QString &gift) {
	QByteArray data;
	data.append(Type::GIFT + 48);
	data.append('\n');
	data.append(socket->get_name());
	data.append('\n');
	data.append(gift);
	data.append('\n');
	for (const auto &item : m_room[socket->get_room()]) {
		item->write(data);
		item->flush();
	}
}

void MyTcpServer::update_integral(const QString &name) {
	QByteArray data;
	data.append(Type::TOPUP + 48);
	data.append('\n');
	data.append(QString(std::to_string(MyDatabase::get_instance().get_score(name.toStdString().data())).data()));
	data.append('\n');
	for (auto &item:m_list) {
		if (item->get_name() == name) {
			item->write(data);
			item->flush();
		}
	}
}

void MyTcpServer::nodify_new_member(const QString &name, const QString &room) {
	QByteArray data;
	data.append(Type::CHANGEROOM + 48);
	data.append('\n');
	data.append(Status::ADD + 48);
	data.append('\n');
	data.append(name);
	data.append('\n');
	for (const auto &item:m_room[room]) {
		item->write(data);
		item->flush();
	}
}

void MyTcpServer::nodify_del_member(const QString &name, const QString &room) {
	QByteArray data;
	data.append(Type::CHANGEROOM + 48);
	data.append('\n');
	data.append(Status::DEL + 48);
	data.append('\n');
	data.append(name);
	data.append('\n');
	for (const auto &item:m_room[room]) {
		item->write(data);
		item->flush();
	}
}



