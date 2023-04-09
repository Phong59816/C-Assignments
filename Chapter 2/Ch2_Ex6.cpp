// Ch2_Ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Name: Phong Tran
Date: 1/4/23
Project: Chapter 2 Excercise 6
Description: This program add all the digits in the integer
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number between 0 and 1000: ";
	int input;
	cin >> input;
	int total = 0;
	if (input > 0) {
		while (input > 0) {
			int digit = input % 10;
			input = input / 10;
			total = total + digit;
		}
	}
	cout << "The sum of the digits is " << total;
}
