#ifndef CHANGEPASSWD_H
#define CHANGEPASSWD_H

#include "messagepdu.h"
#include <QDialog>
#include <QTcpSocket>
#include <QMessageBox>

namespace Ui {
	class changepasswd;
}

class ChangePasswd : public QDialog {
Q_OBJECT

public:
	explicit ChangePasswd(QWidget *parent = nullptr);
	~ChangePasswd() override;
	void set_pushbutton(const QString &str);
	void set_mail_unable(bool status);
	void set_passwd_visual(bool status);

private slots:
	void send_mail();

private:
	Ui::changepasswd *ui;
};

#endif // CHANGEPASSWD_H
