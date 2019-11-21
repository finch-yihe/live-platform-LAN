#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QWidget(parent), m_sign_in(new Sign_in), m_chat_socket(new QTcpSocket), ui(new Ui::MainWindow), local_room("")
	  , local_name(""), local_integral(0), local_video(0), m_flag(false), m_status(true), m_video_socket(new QUdpSocket), m_status_
		(false), m_bullet(false) {
	ui->setupUi(this);
	like_label = new MyLabel(ui->chat_room, Gift::LIKE, ":/png/like_.gif");
	flower_label = new MyLabel(ui->screen_widget, Gift::FLOWER, ":/png/flower_.gif");
	rocket_label = new MyLabel(ui->screen_widget, Gift::ROCKET, ":/png/rocket_.png");
	ui->screen_widget->setPixmap(QPixmap(":/png/room.jpg"));
	connect_to_server();
	m_markdown = new markdown_highlighter(ui->chat_room);
	set_connect();
	m_sign_in->show();
}

MainWindow::~MainWindow() {
	delete ui;
	delete m_chat_socket;
	delete m_video_socket;
}

void MainWindow::connect_to_server() {
	QFile server_config("../config/server.config");
	if (!server_config.open(QIODevice::ReadOnly)) {
		QMessageBox::critical(this, "错误", "无法找到服务器配置文件");
		exit(1);
	} else {
		QByteArray str = server_config.readAll();
		server_config.close();
		QList<QByteArray> config_information = str.split('\n');
		QString strIP = config_information[0];
		QString strPORT = config_information[1];
		m_chat_socket->connectToHost(strIP, strPORT.toUShort());
	}
}

MainWindow &MainWindow::get_instance() {
	static MainWindow main_window;
	return main_window;
	
}

QTcpSocket *MainWindow::get_chat_socket() {
	return m_chat_socket;
}

void MainWindow::set_connect() {
	connect(m_chat_socket, SIGNAL(readyRead()), this, SLOT(recv_msg()));
	connect(m_chat_socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(accept_error(QAbstractSocket::SocketError)));
	connect(ui->create_room, SIGNAL(clicked()), this, SLOT(create_chat_room()));
	connect(ui->room_list, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(join_in_chat_room(QModelIndex)));
	connect(ui->send_data, SIGNAL(clicked()), this, SLOT(send_chat_data()));
	connect(ui->lineEdit, SIGNAL(returnPressed()), ui->send_data, SIGNAL(clicked()), Qt::UniqueConnection);
	connect(ui->back, SIGNAL(clicked()), this, SLOT(send_quit_info()));
	connect(ui->show_video, SIGNAL(clicked()), this, SLOT(change_play_channel()));
	connect(ui->show_screen, SIGNAL(clicked()), this, SLOT(change_play_channel()));
	connect(ui->world_list, SIGNAL(tabBarClicked(int)), this, SLOT(show_parters(int)));
	connect(ui->ui_flower, SIGNAL(clicked()), this, SLOT(send_flower()));
	connect(ui->ui_horse, SIGNAL(clicked()), this, SLOT(send_pepper()));
	connect(ui->ui_like, SIGNAL(clicked()), this, SLOT(send_like()));
	connect(ui->ui_rocket, SIGNAL(clicked()), this, SLOT(send_rocket()));
	connect(ui->top_up, SIGNAL(clicked()), this, SLOT(top_up()));
	connect(ui->barrage, SIGNAL(stateChanged(int)), this, SLOT(change_barrage(int)));
	connect(this, SIGNAL(send_gift(int)), this, SLOT(recv_gift(int)));
}

void MainWindow::handle_data(const QByteArray &recv_data) {
	QList<QByteArray> recv = recv_data.split('\n');
	int size = recv.size() - 1;
	switch (recv[0].toInt()) {
		case Type::REGISTER:
			qDebug() << "注册" << recv_data << " " << size;
			if (recv[1].toInt() == Status::OK) {
				QMessageBox::information(this, "注册", "注册成功！");
			} else if (recv[1].toInt() == Status::WARN) {
				QMessageBox::critical(m_sign_in, "注册", "您已注册过，请确保身份证号码是否输入有误！");
			} else if (recv[1].toInt() == Status::ERROR) {
				QMessageBox::critical(m_sign_in, "注册", "该昵称已被其他用户使用，请修改昵称！");
			} else {
				QMessageBox::critical(m_sign_in, "注册", "该邮箱已注册，请修改邮箱！");
			}
			break;
		case Type::SIGNIN:
			qDebug() << "登录" << recv_data << " " << size;
			if (recv[1].toInt() == Status::OK) {
				if (m_sign_in->get_is_saved()) {
					m_sign_in->save_user_info();
				} else {
					QFile("../config/user.config").remove();
				}
				local_name = m_sign_in->get_user_name();
				setWindowTitle(local_name + QString("的世界"));
				local_integral = recv[2].toInt();
				ui->integral->setText(QString("积分:") + std::to_string(local_integral).data());
				ui->title->setText("暂未进入任何房间！");
				set_live_enable(false);
				if (m_room.contains(local_name)) {
					local_room = local_name;
					ask_change_room(local_room);
				}
				QByteArray refresh;
				refresh.append(Type::REFRESH + 48);
				refresh.append('\n');
				refresh.append(Step::ONE + 48);
				refresh.append('\n');
				m_chat_socket->write(refresh);
				m_chat_socket->flush();
				local_integral = recv[2].toInt();
				if (size != 3) {
					generate_redata(recv, size, 3);
				}
				show();
				break;
			} else if (recv[1].toInt() == Status::WARN) {
				QMessageBox::critical(m_sign_in, "登录", "该账号已在其他地点登录，请重新登录！");
				m_sign_in->show();
			} else {
				QMessageBox::critical(m_sign_in, "登录", "用户名或者密码错误！");
				m_sign_in->show();
			}
			if (size != 2) {
				generate_redata(recv, size, 2);
			}
			break;
		case Type::CODE:
			qDebug() << "验证" << recv_data;
			if (recv[1].toInt() == Step::ONE) {
				if (recv[2].toInt() == Status::OK) {
					m_sign_in->m_changepasswd_ui->set_pushbutton("身份认证");
				} else {
					QMessageBox::critical(m_sign_in->m_changepasswd_ui, "重置密码", "该邮箱不存在！");
				}
			} else if (recv[1].toInt() == Step::TWO) {
				if (recv[2].toInt() == Status::OK) {
					m_sign_in->m_changepasswd_ui->set_pushbutton("修改密码");
					m_sign_in->m_changepasswd_ui->set_mail_unable(false);
					m_sign_in->m_changepasswd_ui->set_passwd_visual(true);
				} else {
					QMessageBox::critical(m_sign_in->m_changepasswd_ui, "重置密码", "验证码错误！");
				}
			} else if (recv[1].toInt() == Step::THREE) {
				if (recv[2].toInt() == Status::OK) {
					m_sign_in->m_changepasswd_ui->set_pushbutton("获取验证码");
					m_sign_in->m_changepasswd_ui->set_mail_unable(true);
					QMessageBox::critical(m_sign_in->m_changepasswd_ui, "重置密码", "修改成功!");
					m_sign_in->m_changepasswd_ui->set_passwd_visual(false);
				} else {
					QMessageBox::critical(m_sign_in->m_changepasswd_ui, "重置密码", "密码不得与原密码相同！");
				}
			}
			break;
		case Type::REFRESH:
			qDebug() << "更新" << recv_data;
			if (recv[1].toInt() == Status::OK) {
				int size_ = (recv.size() - 3) / 2;
				for (int i = 0; i < size_; i++) {
					m_video[QString(recv[i * 2 + 2].toStdString().data())] = QString(recv[i * 2 + 3].toStdString().data()).toUShort();
					refresh_room(QString(recv[i * 2 + 2].toStdString().data()));
				}
			} else if (recv[1].toInt() == Status::DEL) {
				m_room.remove(QString(recv[2].toStdString().data()));
				m_video.remove(QString(recv[2].toStdString().data()));
				del_room(recv[2].toStdString().data());
				if (size != 3) {
					generate_redata(recv, size, 3);
				}
			} else if (recv[1].toInt() == Status::ADD) {
				m_room.insert(QString(recv[2].toStdString().data()));
				m_video[QString(recv[2].toStdString().data())] = QString(recv[3].toStdString().data()).toUShort();
				add_new_room(recv[2].toStdString().data());
				if (size != 4) {
					generate_redata(recv, size, 4);
				}
			} else if (recv[1].toInt() == Status::EMAIL) {
				int size_ = recv[2].toInt();
				for (int i = 0; i < size_; i++) {
					add_new_parter(recv[i + 3].toStdString().data());
				}
				if (size != size_ + 3) {
					generate_redata(recv, size, size_ + 3);
				}
			} else {
				QMessageBox::information(this, "房间", "恭喜，您将成为开创世界的第一人！");
			}
			break;
		case Type::FORWARD: {
			qDebug() << "转发" << recv_data;
			QString user;
			QString word;
			user.append(" ");
			user.append(recv[1].data());
			set_color(QString(user.data()), Qt::green);
			user.append(":");
			user.append(recv[3].data());
			append_chat_data(user);
			if (m_bullet) {
				auto text = new MyLabel(ui->screen_widget, Gift::BULLET, recv[3].data());
				text->start();
			}
			if (size != 4) {
				generate_redata(recv, size, 4);
			}
			break;
		}
		case Type::GIFT: {
			qDebug() << "礼物" << recv_data;
			QString str("感谢");
			str.append(recv[1]);
			str.append("送的");
			str.append(gift_string[recv[2].toInt()]);
			str.append("!");
			set_color(str, Qt::red);
			ui->chat_room->append(str);
			if (recv[2].toInt() == Gift::ROCKET) {
				rocket_label->status = false;
				rocket_label->start();
			} else if (recv[2].toInt() == Gift::FLOWER) {
				flower_label->status = false;
				flower_label->start();
			} else if (recv[2].toInt() == Gift::LIKE) {
				like_label->status = false;
				like_label->start();
			} else {
			
			}
			if (size != 3) {
				generate_redata(recv, size, 3);
			}
			break;
		}
		case Type::TOPUP:
			qDebug() << "充值" << recv_data;
			ui->integral->setText(QString("积分:") + QString(recv[1].toStdString().data()));
			if (size != 2) {
				generate_redata(recv, size, 2);
			}
			break;
		case Type::CHANGEROOM:
			qDebug() << "房间" << recv_data;
			if (recv[1].toInt() == Status::ADD) {
				add_new_parter(recv[2].toStdString().data());
			} else {
				del_new_parter(recv[2].toStdString().data());
			}
			if (size != 3) {
				generate_redata(recv, size, 3);
			}
			break;
		default: QMessageBox::critical(this, "xixixiix", "xixiixxi！");
			break;
	}
}

void MainWindow::recv_msg() {
	QByteArray recv_data = m_chat_socket->readAll();
	handle_data(recv_data);
}

void MainWindow::set_live_enable(bool status) {
	if (status) {
		m_flag = true;
		enable_video();
	} else {
		m_flag = false;
		m_capture.release();
	}
	ui->show_screen->setHidden(!status);
	ui->show_video->setHidden(!status);
}

void MainWindow::ask_change_room(const QString &room) {
	QByteArray data;
	data.append(Type::CHANGEROOM + 48);
	data.append('\n');
	data.append(room);
	data.append('\n');
	m_chat_socket->write(data);
	m_chat_socket->flush();
}

void MainWindow::refresh_room(const QString &str) {
	if (str == local_name) {
		local_room = str;
		ask_change_room(local_room);
		ui->title->setText("我的世界");
		set_live_enable(true);
		local_video = m_video[local_room];
	}
	m_room.insert(str);
	ui->room_list->addItem(str);
}

void MainWindow::set_color(const QString &str, const QColor &color) {
	m_markdown->SetColorText(str, color);
}

void MainWindow::append_chat_data(const QString &str) {
	ui->chat_room->append(str);
}

void MainWindow::generate_redata(const QList<QByteArray> &data, int size, int in_use) {
	QByteArray re_data;
	for (int i = 0; i < size - in_use; i++) {
		re_data.append(data[i + in_use]);
		re_data.append('\n');
	}
	handle_data(re_data);
}

void MainWindow::accept_error(QAbstractSocket::SocketError socketError) {
	if (socketError == QAbstractSocket::SocketError::ConnectionRefusedError) {
		if (system("ping www.baidu.com -c 1") != 0) {
			QMessageBox::critical(this, "连接失败", "请检查网络连接！");
			exit(1);
		} else {
			QMessageBox::critical(this, "连接失败", "我的世界服务器正维修中，请稍等！");
			exit(1);
		}
	} else {
		QMessageBox::critical(this, "连接失败", "我的世界服务器断开连接！");
		exit(1);
	}
}

void MainWindow::showEvent(QShowEvent *event) {
	this->move((QApplication::desktop()->width() - this->width()) / 2, (QApplication::desktop()->height() - this->height()) / 2);
}

void MainWindow::create_chat_room() {
	if (local_room == local_name) {
		QMessageBox::critical(this, "创建房间", "别太贪心哦，一个世界还满足不了你吗？");
	} else {
		ui->chat_room->clear();
		ui->lineEdit->clear();
		local_room = local_name;
		set_live_enable(true);
		ask_change_room(local_room);
	}
}

void MainWindow::del_room(const QString &str) {
	int size = ui->room_list->count();
	for (int i = 0; i < size; i++) {
		if (ui->room_list->item(i)->text() == str) {
			ui->room_list->takeItem(i);
			return;
		}
	}
}

void MainWindow::add_new_room(const QString &str) {
	ui->room_list->addItem(str);
	if (str == local_name) {
		local_video = m_video[QString(str.data())];
		ui->title->setText("我的世界");
	}
}

void MainWindow::join_in_chat_room(QModelIndex index) {
	if (local_room.toStdString() == index.data().toString().toStdString()) {
		QMessageBox::critical(this, "房间", "不识庐山真面目，只缘身在此山中!");
	} else {
		m_status_ = false;
//		disconnect(m_video_socket, SIGNAL(readyRead()), this, SLOT(recv_video()));
		delete m_video_socket;
		ui->chat_room->clear();
		ui->member_list->clear();
		local_room = QString(index.data().toString().toStdString().data());
		ask_change_room(local_room);
		ui->title->setText(QString("房间号:") + QString(index.data().toString().toStdString().data()));
		m_video_socket = new QUdpSocket;
		if (local_room == local_name) {
			set_live_enable(true);
		} else {
			set_live_enable(false);
			m_video_socket->bind(m_video[QString(local_room.data())], QUdpSocket::ReuseAddressHint);
			connect(m_video_socket, SIGNAL(readyRead()), this, SLOT(recv_video_data()));
		}
	}
}

void MainWindow::recv_video_data() {
	QByteArray datagram;
	datagram.resize(m_video_socket->pendingDatagramSize());
	m_video_socket->readDatagram(datagram.data(), datagram.size());
	QByteArray decryptedByte;
	decryptedByte = QByteArray::fromBase64(datagram.data());
	QByteArray uncompressByte = qUncompress(decryptedByte);
	QPixmap test;
	test.loadFromData(uncompressByte);
	ui->screen_widget->setPixmap(test);
}

void MainWindow::send_chat_data() {
	if (ui->lineEdit->text().isEmpty() || local_room == "") {
		ui->lineEdit->clear();
		return;
	} else {
		QByteArray data;
		data.append(Type::FORWARD + 48);
		data.append('\n');
		data.append(local_name);
		data.append('\n');
		data.append(local_room);
		data.append('\n');
		data.append(ui->lineEdit->text());
		data.append('\n');
		m_chat_socket->write(data);
		m_chat_socket->flush();
		ui->lineEdit->clear();
	}
}

void MainWindow::send_quit_info() {
	QByteArray quit_data;
	quit_data.append(Type::QUIT + 48);
	quit_data.append('\n');
	m_chat_socket->write(quit_data);
	m_chat_socket->flush();
	back_to_sign();
}

void MainWindow::back_to_sign() {
	m_status_ = false;
	m_flag = false;
	m_capture.release();
	local_name = "";
	local_room = "";
	m_room.clear();
	local_integral = 0;
	local_video = 0;
	ui->room_list->clear();
	ui->member_list->clear();
	ui->screen_widget->clear();
	ui->lineEdit->clear();
	ui->chat_room->clear();
	this->hide();
	m_sign_in->show();
}

void MainWindow::top_up() {
	bool ok;
	int integral_ = QInputDialog::getInt(this, "充值", "请输入充值金额:", QLineEdit::Normal, 0, 99999, 1, &ok);
	if (ok) {
		QByteArray data;
		data.append(Type::TOPUP + 48);
		data.append('\n');
		data.append(local_name);
		data.append('\n');
		data.append(QString(std::to_string(integral_).data()));
		data.append('\n');
		m_chat_socket->write(data);
		m_chat_socket->flush();
		local_integral += integral_;
		ui->integral->setText(QString("积分:") + std::to_string(local_integral).data());
		QMessageBox::information(this, "充值", "充值成功！");
	}
}

void MainWindow::change_play_channel() {
	m_status = ui->show_video->isChecked();
}

void MainWindow::timerEvent(QTimerEvent *event) {
	if (event->timerId() == timerid) {
		if (m_flag) {
			QByteArray byte;
			QBuffer buff(&byte);
			if (m_status) {
				if (m_capture.isOpened()) {
					m_capture.read(frame);
				}
				cvtColor(frame, frame, CV_BGR2RGB);
				QImage image((unsigned char *) (frame.data),
				             frame.cols, frame.rows,
				             QImage::Format_RGB888);
				image.save(&buff, "JPEG");
				ui->screen_widget->setPixmap(QPixmap::fromImage(image));
			} else {
				QScreen *screen = QGuiApplication::primaryScreen();
				QPixmap pixmap = screen->grabWindow(QApplication::desktop()->winId());
				pixmap = pixmap.scaled(860, 524, Qt::KeepAspectRatio, Qt::FastTransformation).scaled(860, 524, Qt::KeepAspectRatio,
				                                                                                     Qt::SmoothTransformation);
				QImage test = pixmap.toImage();
				test.save(&buff, "JPG");
				ui->screen_widget->setPixmap(QPixmap::fromImage(test));
			}
			QByteArray compressByte = qCompress(byte, -1);
			QByteArray base64Byte = compressByte.toBase64();
			m_video_socket->writeDatagram(base64Byte.data(), base64Byte.size(),
			                              QHostAddress::Broadcast, local_video);
		}
	}
}

void MainWindow::enable_video() {
	if (m_capture.open(0)) {
		m_video_socket = new QUdpSocket;
		int delay = 1000 / 10;
		timerid = this->startTimer(delay);
	} else {
		return;
	}
}

void MainWindow::show_parters(int index) {
	if (index == 1) {
		if (local_room == "") {
			QMessageBox::critical(this, "查看成员", "主人，您还未进入世界呢！");
			ui->world_list->tabBarClicked(0);
		} else {
			if (!m_status_) {
				m_status_ = true;
				ui->member_list->clear();
				QByteArray data;
				data.append(Type::REFRESH + 48);
				data.append('\n');
				data.append(Step::TWO + 48);
				data.append('\n');
				m_chat_socket->write(data);
				m_chat_socket->flush();
			}
		}
	}
}

void MainWindow::add_new_parter(const QString &name) {
	ui->member_list->addItem(name);
}

void MainWindow::recv_gift(int gift) {
	if (local_room == "" || local_room == local_name) {
		QMessageBox::critical(this, "礼物", "想啥呢？？？？？？？？？？");
		return;
	}
	if (local_integral >= gift_integral[gift]) {
		local_integral -= gift_integral[gift];
		ui->integral->setText(QString("积分:") + QString(std::to_string(local_integral).data()));
		QByteArray data;
		data.append(Type::GIFT + 48);
		data.append('\n');
		data.append((char) (gift + 48));
		data.append('\n');
		m_chat_socket->write(data);
		m_chat_socket->flush();
	} else {
		QMessageBox::critical(this, "礼物", "主人，您的积分可能还在路上！");
	}
}

void MainWindow::send_pepper() {
	emit send_gift(Gift::PEPPER);
}

void MainWindow::send_like() {
	emit send_gift(Gift::LIKE);
}

void MainWindow::send_rocket() {
	emit send_gift(Gift::ROCKET);
}

void MainWindow::send_flower() {
	emit send_gift(Gift::FLOWER);
}

void MainWindow::del_new_parter(const QString &name) {
	int size = ui->member_list->count();
	for (int i = 0; i < size; i++) {
		if (ui->member_list->item(i)->text() == name) {
			ui->member_list->takeItem(i);
			return;
		}
	}
}

void MainWindow::change_barrage(int state) {
	m_bullet = state == 2;
}


