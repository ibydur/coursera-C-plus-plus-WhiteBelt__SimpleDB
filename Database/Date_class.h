#pragma once
class Date {
public:
	Date();
	Date(int year, int month, int day);
	int GetYear()const;
	int GetMonth() const;
	int GetDay() const;
	friend bool operator<(const Date& lhs, const Date& rhs);
	friend bool operator==(const Date& lhs, const Date& rhs);
private:
	int year;
	int month;
	int day;
};