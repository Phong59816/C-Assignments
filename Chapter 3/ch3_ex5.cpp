// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string getDay(int value) {
	string day;
	switch (value) {
	case 0: day = "Sunday";
		break;
	case 1: day = "Monday";
		break;
	case 2: day = "Tuesday";
		break;
	case 3: day = "Wednesday";
		break;
	case 4: day = "Thursday";
		break;
	case 5: day = "Friday";
		break;
	case 6: day = "Saturday";
		break;
	}
	return day;
}

int main() {
	cout << "Enter today's day of week (0 to 6): ";
	int day;
	cin >> day;
	cout << "Enter the  number of days elapsed since today: ";
	int elapsed;
	cin >> elapsed;
	int future = day;
	while (elapsed > 0) {
		future++;
		if (future > 6) {
			future = 0;
		}
		elapsed--;
	}
	cout << "Today is " << getDay(day) << " and the future day is " << getDay(future);
}
