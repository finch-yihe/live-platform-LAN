#ifndef TEST_INCLUDE_SERVER_H_
#define TEST_INCLUDE_SERVER_H_

#include <QWidget>
#include "mytcpserver.h"

class Server : public QWidget {
Q_OBJECT
public:
	static Server &get_instance();
	MyTcpServer &get_tcp_server();

private:
	MyTcpServer m_tcpserver;
	
	explicit Server(QWidget *parent = nullptr);
	~Server() override;
};
#endif //TEST_INCLUDE_SERVER_H_
