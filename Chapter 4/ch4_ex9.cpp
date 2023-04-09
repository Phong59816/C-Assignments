// ch4_ex9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a character: ";
	string str;
	cin >> str;
	if (str.length() != 1) {
		cout << "Invalid input";
	}
	else {
		cout << "The ASCII code for the character is " << int(str.at(0));
	}
}

