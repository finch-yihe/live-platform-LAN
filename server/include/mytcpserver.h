#ifndef TEST_INCLUDE_MYTCPSERVER_H_
#define TEST_INCLUDE_MYTCPSERVER_H_

#include "mytcpsocket.h"
#include <QTcpServer>
#include <QVector>
#include <QList>
#include <QMap>
#include <QQueue>
#include <QSet>

class MyTcpServer : public QTcpServer {
Q_OBJECT
public:
	MyTcpServer();
	
	void incomingConnection(qintptr socketDescriptor) override;
	
	void get_number();
	void remove_socket(MyTcpSocket *socket);
	void sign_in(const QString &name, MyTcpSocket *socket);
	void forward_data(const QByteArray &data);
	bool is_online(const QString &name);
	void quit_sign(MyTcpSocket *socket);
	void add_code(const QString &mail, const QString &code);
	bool compare_code(const QString &mail, const QString &code);
	void change_room(MyTcpSocket *socket, const QString &room);
	void send_gift(MyTcpSocket *socket, const QString &gift);
	void update_integral(const QString &name);
	QByteArray get_room_list();
	QByteArray get_parters_list(const QString &room);

private:
	QMap<QString, QString> m_code;
	QList<MyTcpSocket *> m_vec;
	QList<MyTcpSocket *> m_list;
	QMap<QString, QSet<MyTcpSocket *>> m_room;
	QQueue<quint16> m_ports;
	void nodify_new_room(const QString &room);
	void nodify_del_room(const QString &room);
	void nodify_new_member(const QString &name, const QString &room);
	void nodify_del_member(const QString &name, const QString &room);
	
};

#endif //TEST_INCLUDE_MYTCPSERVER_H_
