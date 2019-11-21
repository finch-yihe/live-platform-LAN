#ifndef SING_IN_H
#define SING_IN_H

#include <QWidget>
#include "register.h"
#include "changepasswd.h"

namespace Ui {
	class Sign_in;
}

class Sign_in : public QWidget {
Q_OBJECT

public:
	explicit Sign_in(QWidget *parent = nullptr);
	~Sign_in() override;
	Register *m_register_ui;
	ChangePasswd *m_changepasswd_ui;
	void save_user_info();
	bool get_is_saved();
	QString get_user_name();

protected:
	void showEvent(QShowEvent *event) override;
	void closeEvent(QCloseEvent *event) override;

private:
	Ui::Sign_in *ui;
	bool active{};
	void set_connect();
	void set_tab_order();

private slots:
	void sign_in();
	void regist_account();
	void send_regist_data();
	void show_change_passwd_ui();
};

#endif // SING_IN_H
