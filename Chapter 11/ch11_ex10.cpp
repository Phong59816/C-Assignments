// ch11_ex10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<string>
#include<algorithm>

int* count(const string& s) {
	int* alp = new int[26];

	for (int i = 0; i < 26; i++) {
		alp[i] = 0;
	}

	for (int i = 0; i < s.length(); i++) {
		char c = tolower(s.at(i));
		alp[c - 'a']++;
	}
	return alp;
}

void printArray(const int* list, int size) {
	for (int i = 0; i < size; i++) {
		if (list[i] > 0) {
			if (list[i] > 1) {
				cout << (char)(97 + i) << ": " << " " << list[i] << " times" << endl;
			}
			else {
				cout << (char)(97 + i) << ": " << " " << list[i] << " time" << endl;
			}
		}
	}
}

int main()
{
	cout << "Enter a string: ";
	string str;
	getline(cin, str);
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	int* list = count(str);
	printArray(list, 26);
}

