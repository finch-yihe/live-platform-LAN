#ifndef TEST_INCLUDE_MESSAGEPDU_H_
#define TEST_INCLUDE_MESSAGEPDU_H_

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
} gift_;

static int gift_integral[4] = {1000, 100, 10, 0};

#endif //TEST_INCLUDE_MESSAGEPDU_H_
