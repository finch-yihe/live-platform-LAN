#ifndef TEST_INCLUDE_MYLABEL_H_
#define TEST_INCLUDE_MYLABEL_H_

#include <QLabel>
#include <QTimer>
#include <QMovie>
#include <ctime>
#include <cstdlib>
#include "messagepdu.h"

class MyLabel : public QLabel {
Q_OBJECT
public:
	explicit MyLabel(QWidget *parent, const int &classification, const QString &filename);
	~MyLabel() override;
	void start();
	bool status;
private:
	int type;
	QWidget *parent_;
	QTimer m_timer;
	QMovie m_movie;

private slots:
	void close_lable();
};
#endif //TEST_INCLUDE_MYLABEL_H_
