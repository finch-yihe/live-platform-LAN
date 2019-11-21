#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include <QDebug>
namespace Ui {
	class Register;
}

class Register : public QDialog {
Q_OBJECT

public:
	explicit Register(QWidget *parent = nullptr);
	~Register() override;
	
	QString get_id();
	QString get_passwd();
	QString get_name();
	QString get_real_name();
	QString get_mail();
	QString get_organization();
	void set_warn_hide();
signals:

private slots:
	void show_tips();
	void set_tip_hide();

protected:
	void showEvent(QShowEvent *event) override;
	void closeEvent(QCloseEvent *event) override;

private:
	Ui::Register *ui;
	void set_hold();
	void set_connect();
};

#endif // REGISTER_H
