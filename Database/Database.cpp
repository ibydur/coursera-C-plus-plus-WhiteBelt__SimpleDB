#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <sstream>
#include "Date_class.h"
#include "Database_class.h"

using namespace std;


void Invalid_Cin(const Date& date);
Date check_date(const string& str);

int main() {

	Database db;
	Date date;
	string command;
	string event;
	vector <string> events;
	int count;
	string s = "", s1 = "";

	while (getline(cin, command)) {
		try {
			stringstream ss(command);
			ss >> s;
			if (command == "") {
				continue;
			}
			else if (s == "Add") {
				ss >> s1 >> event;
				date = check_date(s1);
				Invalid_Cin(date);
				db.AddEvent(date, event);
			}
			else if (s == "Del" && ss >> s1 >> event) {
				date = check_date(s1);
				Invalid_Cin(date);
				db.DeleteEvent(date, event);
			}
			else if (s == "Del") {
				ss >> s1;
				date = check_date(s1);
				Invalid_Cin(date);
				int count = db.DeleteDate(date);
				cout << "Deleted " << count << " events\n";
			}
			else if (s == "Find") {
				ss >> s1;
				date = check_date(s1);
				Invalid_Cin(date);
				events = db.Find(date);
				for (const auto& item : events) {
					cout << item << endl;
				}
			}
			else if (s == "Print") {
				db.Print();
			}
			else {
				cout << "Unknown command: " << command << endl;
			}
			command.clear();
		}
		catch (invalid_argument& ex) {
			cout << ex.what() << endl;
		}
	}
	return 0;
}

void Invalid_Cin(const Date& date) {

	if (date.GetMonth() > 12 || date.GetMonth() < 1) {
		throw invalid_argument("Month value is invalid: " + to_string(date.GetMonth()));
	}
	else if (date.GetDay() > 31 || date.GetDay() < 1) {
		throw invalid_argument("Day value is invalid: " + to_string(date.GetDay()));
	}
}

Date check_date(const string& str) {

	stringstream ss(str);
	int _year, _month, _day;
	char c1, c2;

	if (ss) {
		ss >> _year >> c1 >> _month >> c2 >> _day;
		if (ss && ss.eof() && c1 == '-' && c2 == '-') {

			return Date(_year, _month, _day);
		}
		else {
			throw invalid_argument("Wrong date format: " + ss.str());
		}
	}
}