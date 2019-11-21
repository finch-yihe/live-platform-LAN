#include "sign_in.h"
#include "ui_sign_in.h"
#include "mainwindow.h"

Sign_in::Sign_in(QWidget *parent) :
	QWidget(parent), m_register_ui(new Register(this)), m_changepasswd_ui(new ChangePasswd(this)), ui(new Ui::Sign_in) {
	ui->setupUi(this);
	ui->ui_account->setPlaceholderText("请输入账号");
	ui->ui_password->setPlaceholderText("请输入密码");
	set_connect();
	set_tab_order();
}

Sign_in::~Sign_in() {
	delete ui;
}

void Sign_in::set_connect() {
	connect(ui->ui_account, SIGNAL(returnPressed()), ui->ui_sign_in, SIGNAL(clicked()), Qt::UniqueConnection);
	connect(ui->ui_password, SIGNAL(returnPressed()), ui->ui_sign_in, SIGNAL(clicked()), Qt::UniqueConnection);
	connect(ui->ui_sign_in, SIGNAL(clicked()), this, SLOT(sign_in()));
	connect(ui->ui_register_account, SIGNAL(clicked()), this, SLOT(regist_account()));
	connect(m_register_ui, SIGNAL(accepted()), this, SLOT(send_regist_data()));
	connect(ui->ui_forget_password, SIGNAL(clicked()), this, SLOT(show_change_passwd_ui()));
}

void Sign_in::sign_in() {
	if (ui->ui_account->text().isEmpty() || ui->ui_password->text().isEmpty()) {
		QMessageBox::critical(this, "登录", "用户名和密码不能为空！");
		return;
	}
	QByteArray data;
	data.append(Type::SIGNIN + 48);
	data.append("\n");
	data.append(ui->ui_account->text());
	data.append("\n");
	data.append(ui->ui_password->text());
	data.append("\n");
	MainWindow::get_instance().get_chat_socket()->write(data.data());
	MainWindow::get_instance().get_chat_socket()->flush();
	hide();
}

void Sign_in::show_change_passwd_ui() {
	m_changepasswd_ui->exec();
}

void Sign_in::regist_account() {
	m_register_ui->resize(200, 24);
	m_register_ui->exec();
}

void Sign_in::send_regist_data() {
	QByteArray data;
	data.append(Type::REGISTER + 48);
	data.append('\n');
	data.append(m_register_ui->get_id());
	data.append('\n');
	data.append(m_register_ui->get_name());
	data.append('\n');
	data.append(m_register_ui->get_passwd());
	data.append('\n');
	data.append(m_register_ui->get_real_name());
	data.append('\n');
	data.append(m_register_ui->get_mail());
	data.append('\n');
	data.append(m_register_ui->get_organization());
	data.append('\n');
	MainWindow::get_instance().get_chat_socket()->write(data);
	MainWindow::get_instance().get_chat_socket()->flush();
}

void Sign_in::set_tab_order() {
	setTabOrder(ui->ui_account, ui->ui_password);
}

void Sign_in::save_user_info() {
	if (ui->ui_save_password->checkState() == Qt::CheckState::Checked) {
		QFile user_information("../config/user.config");
		user_information.open(QIODevice::WriteOnly);
		user_information.write(QString(ui->ui_account->text() + '\n' + ui->ui_password->text()).toStdString().c_str());
		user_information.close();
	}
}

void Sign_in::closeEvent(QCloseEvent *event) {
	if (ui->ui_save_password->isChecked()) {
		save_user_info();
	} else {
		QFile("../config/user.config").remove();
	}
	exit(0);
}

bool Sign_in::get_is_saved() {
	return ui->ui_save_password->isChecked();
}

QString Sign_in::get_user_name() {
	return QString(ui->ui_account->text().data());
}

void Sign_in::showEvent(QShowEvent *event) {
	this->move((QApplication::desktop()->width() - this->width()) / 2, (QApplication::desktop()->height() - this->height()) / 2);
	QFile user_information("../config/user.config");
	if (user_information.open(QIODevice::ReadOnly)) {
		QByteArray str = user_information.readAll();
		user_information.close();
		QList<QByteArray> information = str.split('\n');
		ui->ui_account->setText(information[0]);
		ui->ui_password->setText(information[1]);
		ui->ui_save_password->setCheckState(Qt::Checked);
	} else {
		ui->ui_save_password->setCheckState(Qt::Unchecked);
	}
}

