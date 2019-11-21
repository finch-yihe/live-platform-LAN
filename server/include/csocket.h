#ifndef TEST_INCLUDE_CSOCKET_H_
#define TEST_INCLUDE_CSOCKET_H_

#include <sys/socket.h>
#include <arpa/inet.h>
#include <string>

#define BUFF_LEN 256

class CSocket {
public:
	CSocket() = default;
	CSocket(std::string client_mail, std::string code);
	~CSocket();
	void send_code();

private:
	int m_sockfd;
	char m_reciveBuff[BUFF_LEN]{};
	struct sockaddr_in m_add{};
	std::string m_server_name;
	std::string m_server_mail;
	std::string m_server_passwd;
	std::string m_client_mail;
	std::string m_code;
	
	bool initialize();
	bool sendSocketMessage(const char *mesg);
	bool reviceSocketMessage();
	char *getReviceMessage();
};

#endif //TEST_INCLUDE_CSOCKET_H_
