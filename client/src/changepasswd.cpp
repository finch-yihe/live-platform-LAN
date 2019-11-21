#include "changepasswd.h"
#include "ui_changepasswd.h"
#include "mainwindow.h"

ChangePasswd::ChangePasswd(QWidget *parent) :
	QDialog(parent), ui(new Ui::changepasswd) {
	ui->setupUi(this);
	set_passwd_visual(false);
	connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(send_mail()));
}

ChangePasswd::~ChangePasswd() {
	delete ui;
}

void ChangePasswd::send_mail() {
	QByteArray data;
	data.append(Type::CODE + 48);
	data.append('\n');
	if (ui->pushButton->text() == "获取验证码") {
		if (ui->mail_editor->text().contains("@")) {
			data.append(Step::ONE + 48);
			data.append('\n');
			data.append(ui->mail_editor->text());
			data.append('\n');
			MainWindow::get_instance().get_chat_socket()->write(data);
			MainWindow::get_instance().get_chat_socket()->flush();
		} else {
			QMessageBox::critical(this, "重置密码", "邮箱格式不正确，请重新输入！");
		}
	} else if (ui->pushButton->text() == "身份认证") {
		if (ui->code_editor->text().size() == 4) {
			data.append(Step::TWO + 48);
			data.append('\n');
			data.append(ui->mail_editor->text());
			data.append('\n');
			data.append(ui->code_editor->text());
			data.append('\n');
			MainWindow::get_instance().get_chat_socket()->write(data);
			MainWindow::get_instance().get_chat_socket()->flush();
		} else {
			QMessageBox::critical(this, "重置密码", "验证码格式不正确，请重新输入！");
		}
	} else if (ui->pushButton->text() == "修改密码") {
		if (ui->passwd_editor->text().isEmpty() || ui->repasswd_editor->text().isEmpty()) {
			QMessageBox::critical(this, "重置密码", "请连续两次输入相同的密码！");
		} else {
			if (ui->passwd_editor->text() != ui->repasswd_editor->text()) {
				QMessageBox::critical(this, "重置密码", "两次密码不一致！");
			} else {
				data.append(Step::THREE + 48);
				data.append('\n');
				data.append(ui->mail_editor->text());
				data.append('\n');
				data.append(ui->passwd_editor->text());
				data.append('\n');
				MainWindow::get_instance().get_chat_socket()->write(data);
				MainWindow::get_instance().get_chat_socket()->flush();
				accept();
			}
		}
	}
}

void ChangePasswd::set_pushbutton(const QString &str) {
	ui->pushButton->setText(str);
}

void ChangePasswd::set_mail_unable(bool status) {
	ui->mail_editor->setEnabled(status);
}

void ChangePasswd::set_passwd_visual(bool status) {
	if (!status) {
		ui->passwd_editor->hide();
		ui->repasswd_editor->hide();
		ui->label_3->hide();
		ui->label_4->hide();
	} else {
		ui->passwd_editor->show();
		ui->repasswd_editor->show();
		ui->label_3->show();
		ui->label_4->show();
	}
	
}

