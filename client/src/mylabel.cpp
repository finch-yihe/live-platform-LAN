#include "mylabel.h"
#include <QDebug>

void MyLabel::close_lable() {
	if (type == Gift::LIKE || type == Gift::FLOWER) {
		m_movie.stop();
		this->hide();
		m_timer.stop();
		status = false;
		return;
	} else if (type == Gift::ROCKET) {
		this->move(this->pos() + QPoint(0, -5));
		if (this->y() + 100 < parentWidget()->y()) {
			m_timer.stop();
			this->hide();
			status = false;
			return;
		}
	} else {
		this->move(this->pos() + QPoint(-5, 0));
		if (this->x() + 300 < parent_->x()) {
			delete this;
		}
	}
}

void MyLabel::start() {
	if (status) {
		return;
	}
	if (type == Gift::ROCKET) {
		this->move(QPoint(parent_->width() / 2 - this->width() / 2, parent_->height()));
		m_timer.start(3);
	} else if (type == Gift::BULLET) {
		srand(time(nullptr));
		int y_ = rand() % parent_->height() / 2;
		this->move(QPoint(parent_->width(), parent_->y() + y_));
		m_timer.start(100);
	} else {
		m_movie.start();
		m_timer.start(1000);
	}
	this->show();
}

MyLabel::MyLabel(QWidget *parent, const int &classification, const QString &filename = "")
	: QLabel(parent), type(classification), parent_(parent) {
	connect(&m_timer, SIGNAL(timeout()), this, SLOT(close_lable()));
	this->hide();
	status = true;
	this->setScaledContents(true);
	this->raise();
	if (classification == Gift::FLOWER) {
		this->move(parent->pos());
		this->resize(parent->size());
		m_movie.setFileName(filename);
		this->setMovie(&m_movie);
	} else if (classification == Gift::LIKE) {
		this->resize(100, 100);
		this->move(parent->pos() + QPoint(100, 100));
		m_movie.setFileName(filename);
		this->setMovie(&m_movie);
	} else if (classification == Gift::ROCKET) {
		this->setPixmap(QPixmap(filename));
		this->resize(300, 300);
	} else {
		this->setText(filename);
		this->setStyleSheet(QString("    border-style: outset;\n"
		                            "    border-radius: 8px;\n"
		                            "\tcolor: rgb(201, 255, 3);\n"
		                            "\tfont: 75 16pt \"Ubuntu Mono\";\n"
		                            "\tborder:2px solid rgb(186, 189, 182);"));
		status = false;
	}
}

MyLabel::~MyLabel() = default;
