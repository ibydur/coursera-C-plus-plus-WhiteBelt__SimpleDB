#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "Database_class.h"

void Database::AddEvent(const Date& date, const string& event) {
	database[date].insert(event);
}

bool Database::DeleteEvent(const Date& date, const string& event) {
	for (auto& item_i : database) {
		for (auto& item_j : item_i.second) {
			if (item_i.first == date && item_j == event) {
				database[date].erase(event);
				cout << "Deleted successfully\n";
				return true;
			}
		}
	}
	cout << "Event not found\n";
	return false;
}

int Database::DeleteDate(const Date& date) {
	int N = 0;
	for (const auto& item : database) {
		if (item.first == date) {
			N = item.second.size();
			database.erase(date);
			break;
		}
	}
	return N;
}

vector <string> Database::Find(const Date& date) const {
	vector <string> events;
	for (const auto& item_i : database) {
		if (item_i.first == date) {
			for (const auto& item_j : item_i.second)
				events.push_back(item_j);
		}
	}
	sort(begin(events), end(events));
	return events;
}

void Database::Print() const {
	for (const auto& item_i : database) {
		for (const auto& item_j : item_i.second) {
			cout << setw(4) << setfill('0') << item_i.first.GetYear() << "-" <<
				setw(2) << setfill('0') << item_i.first.GetMonth() << "-" <<
				setw(2) << setfill('0') << item_i.first.GetDay() << " " <<
				item_j << endl;
		}
	}
}