// ch11_ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int mSize = 100;

int main()
{
	double list[mSize];
	cout << "Enter the size of array: ";
	int size;
	cin >> size;
	double input;
	double sum = 0;
	cout << "Enter the numbers for the array: ";
	for (int i = 0;i < size;i++) {
		cin >> input;
		list[i] = input;
		sum += input;
	}
	double avg = sum / size;
	int counter = 0;
	for (int i = 0;i < size;i++) {
		if (list[i] < avg) {
			counter++;
		}
	}
	cout << "There are " << counter << " numbers that are above the average";
}
