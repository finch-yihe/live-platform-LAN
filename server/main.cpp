#include <QApplication>
#include "database.h"
#include <QDebug>
#include "server.h"
int main(int argc, char **argv) {
	QApplication app(argc, argv);
	MyDatabase::get_instance().init();
	Server::get_instance();
	QApplication::exec();
	return 0;
}