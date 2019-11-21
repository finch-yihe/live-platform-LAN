#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
	QDialog(parent), ui(new Ui::Register) {
	ui->setupUi(this);
	set_hold();
	set_connect();
}

Register::~Register() {
	delete ui;
}

void Register::set_tip_hide() {
	ui->warning_label->hide();
	reject();
}

void Register::set_connect() {
	connect(ui->ui_register, SIGNAL(clicked()), this, SLOT(show_tips()));
	connect(ui->ui_back, SIGNAL(clicked()), this, SLOT(set_tip_hide()));
}

void Register::show_tips() {
	bool flag = true;
	std::string warning;
	warning.append("请填入以下信息\n");
	if (ui->ui_name->text().isEmpty()) {
		warning.append("昵称 ");
		flag = false;
	}
	if (ui->ui_password->text().isEmpty() || ui->ui_rpassword->text().isEmpty()) {
		warning.append("密码 ");
		flag = false;
	}
	if (ui->ui_password->text() != ui->ui_rpassword->text()) {
		if (flag) {
			warning.clear();
			warning.append("两次密码不一致！");
			ui->warning_label->setText(QString(warning.data()));
			ui->warning_label->show();
			return;
		}
	}
	if (ui->ui_real_name->text().isEmpty()) {
		warning.append("姓名 ");
		flag = false;
	}
	if (ui->ui_id->text().isEmpty()) {
		warning.append("身份证 ");
		flag = false;
	}
	if (ui->ui_id->text().length() != 18) {
		if (flag) {
			warning.clear();
			warning.append("身份证号码格式有误！\n请重新输入！");
			ui->warning_label->setText(QString(warning.data()));
			ui->warning_label->show();
			return;
		}
	}
	if (ui->ui_mail->text().isEmpty()) {
		warning.append("邮箱 ");
		flag = false;
	}
	if (!ui->ui_mail->text().contains('@')) {
		if (flag) {
			warning.clear();
			warning.append("邮箱格式有误！\n请重新输入！");
			ui->warning_label->setText(QString(warning.data()));
			ui->warning_label->show();
			return;
		}
	}
	if (ui->ui_organization->text() == "NULL" || ui->ui_organization->text() == "null") {
		if (flag) {
			warning.clear();
			warning.append("学校/组织格式有误！\n请重新输入！");
			ui->warning_label->setText(QString(warning.data()));
			ui->warning_label->show();
			return;
		}
	}
	if (warning.empty()) {
		this->hide();
	} else {
		ui->warning_label->setText(QString(warning.data()));
		ui->warning_label->show();
	}
	if (flag) {
		accept();
		this->hide();
	}
}

void Register::set_hold() {
	ui->ui_id->setPlaceholderText("必填项");
	ui->ui_real_name->setPlaceholderText("必填项");
	ui->ui_password->setPlaceholderText("必填项");
	ui->ui_rpassword->setPlaceholderText("必填项");
	ui->ui_mail->setPlaceholderText("必填项");
	ui->ui_organization->setPlaceholderText("可选项");
}

QString Register::get_id() {
	return QString(ui->ui_id->text());
}

QString Register::get_passwd() {
	return QString(ui->ui_password->text());
}

QString Register::get_name() {
	return QString(ui->ui_name->text());
}

QString Register::get_real_name() {
	return QString(ui->ui_real_name->text());
}

QString Register::get_mail() {
	return QString(ui->ui_mail->text());
}

QString Register::get_organization() {
	if (ui->ui_organization->text().isEmpty()) {
		return QString("NULL");
	}
	return QString(ui->ui_organization->text());
}

void Register::set_warn_hide() {
	ui->warning_label->hide();
}

void Register::showEvent(QShowEvent *event) {
	set_warn_hide();
}

void Register::closeEvent(QCloseEvent *event) {
	ui->ui_real_name->clear();
	ui->ui_password->clear();
	ui->ui_mail->clear();
	ui->ui_rpassword->clear();
	ui->ui_organization->clear();
	ui->ui_id->clear();
	ui->ui_name->clear();
}
