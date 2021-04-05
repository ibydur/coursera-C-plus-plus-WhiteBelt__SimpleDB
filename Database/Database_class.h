#pragma once

#include <string>
#include <map>
#include <set>
#include "Date_class.h"

using namespace std;
class Database : public Date{
public:
	void AddEvent(const Date& date, const string& event);
	bool DeleteEvent(const Date& date, const string& event);
	int  DeleteDate(const Date& date);
	vector <string> Find(const Date& date) const;

	void Print() const;

private:
	map <Date, set<string>> database;
};