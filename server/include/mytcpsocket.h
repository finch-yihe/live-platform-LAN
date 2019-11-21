#ifndef TEST_INCLUDE_MYTCPSOCKET_H_
#define TEST_INCLUDE_MYTCPSOCKET_H_

#include "messagepdu.h"
#include "database.h"
#include "csocket.h"
#include <QTcpSocket>

class MyTcpSocket : public QTcpSocket {
Q_OBJECT
public:
	explicit MyTcpSocket(QAbstractSocket *parent = nullptr);
	~MyTcpSocket() override;
	
	void set_port(const qint16 &port_);
	void set_name(const QString &name_);
	void set_room(const QString &room_);
	
	qint16 get_port() const;
	QString get_name() const;
	QString get_room() const;

private slots:
	void data_handle();
	void break_handle();

private:
	QString name;
	QString room;
	qint16 port;
	
};
#endif //TEST_INCLUDE_MYTCPSOCKET_H_
