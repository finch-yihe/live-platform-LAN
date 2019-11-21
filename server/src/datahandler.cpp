#include "datahandler.h"

QString SHA224(const std::string &message) {
	uint8_t digest[SHA224_DIGEST_LENGTH];
	SHA256_CTX ctx;
	SHA224_Init(&ctx);
	SHA224_Update(&ctx, message.c_str(), message.length());
	SHA224_Final(digest, &ctx);
	char mdString[(SHA224_DIGEST_LENGTH << 1) + 1];
	for (int i = 0; i < SHA224_DIGEST_LENGTH; ++i) {
		sprintf(mdString + (i << 1), "%02x", (unsigned int) digest[i]);
	}
	return QString(std::string(mdString).data());
}

QString GENERATE_VERIFICATION_CODE() {
	std::string array("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
	char system_code[4];
	srand((int) time(nullptr));
	system_code[0] = array[rand() % 26];
	system_code[1] = array[rand() % 26 + 26];
	system_code[2] = array[rand() % 10 + 52];
	system_code[3] = array[rand() % 10 + 52];
	return QString(std::string(system_code).data());
}

