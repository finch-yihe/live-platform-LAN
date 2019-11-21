#include "database.h"

void MyDatabase::init() {
	m_database = QSqlDatabase::addDatabase("QMYSQL");
	m_database.setHostName("localhost");
	m_database.setDatabaseName("myworld");
	m_database.setUserName("root");
	m_database.setPassword("yihe120706");
	bool ok = m_database.open();
	if (!ok) {
		QMessageBox::critical(nullptr, "连接数据库", "连接数据库失败" + m_database.lastError().text());
	} else {
		QMessageBox::information(nullptr, "连接数据库", "连接数据库成功");
	}
}

MyDatabase &MyDatabase::get_instance() {
	static MyDatabase instance;
	return instance;
}

bool MyDatabase::regist(const char *user_id,
                        const char *user_name,
                        const char *user_passwd,
                        const char *real_name,
                        const char *user_mail,
                        const char *user_organization) {
	QSqlQuery insert;
	insert.prepare("insert into account values (?, ?)");
	insert.addBindValue(user_name);
	insert.addBindValue(SHA224(std::string(user_passwd)).toStdString().data());
	if (!insert.exec()) {
		return false;
	} else {
		insert.clear();
		insert.prepare("insert into information values (?,?,?,?,?)");
		insert.addBindValue(user_name);
		insert.addBindValue(user_id);
		insert.addBindValue(real_name);
		insert.addBindValue(user_mail);
		insert.addBindValue(user_organization);
		return insert.exec();
	}
}

bool MyDatabase::has_user_and_passwd(const char *user, const char *pwd) {
	QSqlQuery query(QString("select * from account where name = '%1' and passwd = '%2';")
		                .arg(user).arg(SHA224(std::string(pwd)).data()));
	return query.size() == 1;
}

bool MyDatabase::has_user_id(const char *user_id) {
	QSqlQuery query(QString("select * from information where id = '%1'").arg(user_id));
	return query.size() == 1;
}

bool MyDatabase::has_mail(const char *mail) {
	QSqlQuery query(QString("select * from information where  mail= '%1'").arg(mail));
	return query.size() == 1;
}

bool MyDatabase::change_passwd(const char *mail, const char *passwd) {
	QSqlQuery update;
	update.prepare("update account set passwd = ? where name = (select name from information where mail = ?);");
	update.addBindValue(SHA224(std::string(passwd)).toStdString().data());
	update.addBindValue(mail);
	update.exec();
	return update.numRowsAffected() == 1;
}

void MyDatabase::add_score(const char *name, const char *score) {
	QSqlQuery update;
	update.prepare("update integral set score = score + ? where name = ?;");
	update.addBindValue(score);
	update.addBindValue(name);
	update.exec();
}

int MyDatabase::get_score(const char *name) {
	QSqlQuery query(QString("select score from integral where name = '%1'").arg(name));
	QSqlRecord test = query.record();
	int score = test.indexOf("score");
	if (query.next()) {
		return query.value(score).toInt();
	}
	return 0;
}

MyDatabase::MyDatabase() = default;
