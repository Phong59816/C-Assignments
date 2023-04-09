// chapter10_ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isPalindrome(const string& s) {
	bool palindrome = true;
	string copy = s;
	char arr[20];
	for (int i = 0;i < copy.length();i++) {
		arr[i] = copy.at(i);
		arr[i] = (char)tolower(arr[i]);
	}
	for (int i = 0;i < copy.length() / 2;i++) {
		if (arr[i] != arr[copy.length() - i - 1]) {
			return false;
		}
	}
	return palindrome;
}

int main()
{
	cout << "enter a string: ";
	string str;
	cin >> str;
	bool palidrome = isPalindrome(str);
	if (palidrome) {
		cout << str << " is a palindrome";
	}
	else {
		cout << str << " is not a palindrome";
	}
}

