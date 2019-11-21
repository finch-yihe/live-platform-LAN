#include "server.h"

Server::Server(QWidget *parent) {
	m_tcpserver.listen(QHostAddress::Any, 12070);
}

Server::~Server() {
	m_tcpserver.close();
}

Server &Server::get_instance() {
	static Server instance;
	return instance;
}

MyTcpServer &Server::get_tcp_server() {
	return m_tcpserver;
}
