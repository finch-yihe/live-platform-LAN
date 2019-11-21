#ifndef TEST_INCLUDE_DATABASE_H_
#define TEST_INCLUDE_DATABASE_H_

#include "datahandler.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlResult>

class MyDatabase {

public:
	MyDatabase();
	void init();
	
	static MyDatabase &get_instance();
	
	bool regist(const char *user_id,
	            const char *user_name,
	            const char *user_passwd,
	            const char *real_name,
	            const char *user_mail,
	            const char *user_organization = nullptr);
	bool has_user_id(const char *user_id);
	bool has_user_and_passwd(const char *user, const char *pwd);
	bool has_mail(const char *mail);
	bool change_passwd(const char *mail, const char *passwd);
	void add_score(const char *name, const char *score);
	int get_score(const char *name);

private:
	QSqlDatabase m_database;
	
};
#endif //TEST_INCLUDE_DATABASE_H_
