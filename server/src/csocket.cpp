#include <unistd.h>
#include <memory.h>

#include <iostream>
#include <utility>
#include "csocket.h"

CSocket::CSocket(std::string client_mail, std::string code)
	: m_sockfd(-1), m_server_mail("eW91dGhmYWl0aF90ZXN0QDE2My5jb20="), m_server_passwd
	("YXNkZjEyMzQ="), m_code(std::move(code)), m_client_mail(std::move(client_mail)), m_server_name
	("youthfaith_test@163.com") {
}

CSocket::~CSocket() {
	if (-1 != m_sockfd) {
		close(m_sockfd);
	}
}

bool CSocket::initialize() {
	m_sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (-1 == m_sockfd) {
		std::cerr << __FUNCTION__ << std::endl;
		return false;
	}
	m_add.sin_family = AF_INET;
	m_add.sin_port = htons(25);
	int retPton = inet_aton("220.181.12.15", &m_add.sin_addr);
	if (-1 == retPton) {
		std::cerr << __FUNCTION__ << std::endl;
	}
	int retConn = connect(m_sockfd, (struct sockaddr *) &m_add, sizeof(m_add));
	if (-1 == retConn) {
		std::cerr << __FUNCTION__ << "connect error" << std::endl;
	}
	return true;
}

bool CSocket::sendSocketMessage(const char *mesg) {
	int ret = send(m_sockfd, mesg, strlen(mesg), 0);
	if (-1 == ret) {
		std::cerr << __FUNCTION__ << "send message error" << std::endl;
		return false;
	}
	return true;
}

bool CSocket::reviceSocketMessage() {
	memset(m_reciveBuff, 0x00, BUFF_LEN);
	int ret = recv(m_sockfd, m_reciveBuff, BUFF_LEN, 0);
	if (-1 == ret) {
		std::cerr << __FUNCTION__ << "recv error" << std::endl;
		return false;
	}
	return true;
}

char *CSocket::getReviceMessage() {
	return m_reciveBuff;
}
void CSocket::send_code() {
	initialize();
	reviceSocketMessage();
	sendSocketMessage("HELO smtp.163.com\r\n");
	reviceSocketMessage();
	sendSocketMessage("auth login\r\n");
	reviceSocketMessage();
	sendSocketMessage(m_server_mail.c_str());
	sendSocketMessage("\r\n");
	reviceSocketMessage();
	sendSocketMessage(m_server_passwd.c_str());
	sendSocketMessage("\r\n");
	reviceSocketMessage();
	
	sendSocketMessage("mail from: <");
	sendSocketMessage(m_server_name.c_str());
	sendSocketMessage(">");
	sendSocketMessage("\r\n");
	reviceSocketMessage();
	
	sendSocketMessage("rcpt to: <");
	sendSocketMessage(m_client_mail.c_str());
	sendSocketMessage(">");
	sendSocketMessage("\r\n");
	reviceSocketMessage();
	
	sendSocketMessage("data\r\n");
	reviceSocketMessage();
	sendSocketMessage((std::string("from:") + m_server_name + std::string("\r\n")).c_str());
	sendSocketMessage((std::string("to:") + m_client_mail + std::string("\r\n")).c_str());
	sendSocketMessage("subject:Reset your account password\r\n\r\n");
	sendSocketMessage((std::string("Here is the code you need to change your login credentials:")
		+ m_code).c_str());
	sendSocketMessage("\r\n.\r\n");
	reviceSocketMessage();
	sendSocketMessage("quit\r\n");
	reviceSocketMessage();
}
