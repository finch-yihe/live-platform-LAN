#ifndef TEST_INCLUDE_MESSAGEPDU_H_
#define TEST_INCLUDE_MESSAGEPDU_H_

#include <QString>

static enum Type {
	SIGNIN,
	REGISTER,
	CHANGEROOM,
	QUIT,
	CODE,
	FORWARD,
	REFRESH,
	TOPUP,
	GIFT,
} type_;

static enum Status {
	OK,
	WARN,
	ERROR,
	ADD,
	DEL,
	EMAIL,
} status_;

static enum Step {
	ONE,
	TWO,
	THREE,
} step_;

static enum Gift {
	ROCKET,
	FLOWER,
	PEPPER,
	LIKE,
	BULLET,
} gift_;

static int gift_integral[4] = {1000, 100, 10, 0};
static QString gift_string[4] = {"火箭", "鲜花", "辣条", "点赞"};

#endif //TEST_INCLUDE_MESSAGEPDU_H_
