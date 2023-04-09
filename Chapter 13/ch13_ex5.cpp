// ch13_ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	cout << "Enter the year: ";
	int year;
	cin >> year;
	cout << "Enter the gender: ";
	char gender;
	cin >> gender;
	cout << "Enter the name: ";
	string name;
	cin >> name;
	fstream input("babynamesranking" + to_string(year) + ".txt");
	string line;
	bool found = false;
	while (getline(input, line)) {
		if (line.find(name) != string::npos) {
			int pos = line.find(' ');
			string rank = line.substr(0, pos);
			found = true;
			if (gender == 'M') {
				cout << "Boy name " << name << " is ranked #" << rank << " in year " << year;
			}
			else if (gender == 'F') {
				cout << "Girl name " << name << " is ranked #" << rank << " in year " << year;
			}
			else {
				cout << "invalid gender input";
			}
		}
	}
	if (found == false) {
		cout << "Name not found";
	}
}

