#include "Date_class.h"

Date::Date() {
	year = 0;
	month = 0;
	day = 0;
}

Date::Date(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

int Date::GetYear() const {
	return year;
}
int Date::GetMonth() const {
	return month;
}
int Date::GetDay() const {
	return day;
}

bool operator<(const Date& lhs, const Date& rhs) {
	return (lhs.GetYear() < rhs.GetYear());
	return (lhs.GetMonth() < rhs.GetMonth());
	return (lhs.GetDay() < rhs.GetDay());
}

bool operator==(const Date& lhs, const Date& rhs) {
	return (lhs.GetYear() == rhs.GetYear() && lhs.GetMonth() == rhs.GetMonth() && lhs.GetDay() == rhs.GetDay());
}
