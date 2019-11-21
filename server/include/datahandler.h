#ifndef TEST_INCLUDE_DATAHANDLER_H_
#define TEST_INCLUDE_DATAHANDLER_H_

#include <openssl/sha.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <QString>

QString SHA224(const std::string &message);
QString GENERATE_VERIFICATION_CODE();
void send();

#endif //TEST_INCLUDE_DATAHANDLER_H_
