// ch8_ex28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int SIZE = 3;
bool equals(const int m1[][SIZE], const int m2[][SIZE]);

int main()
{
	cout << "Enter m1 (a 3 by 3 matrix) row by row: " << endl;
	int value;
	int m1[SIZE][SIZE];
	int m2[SIZE][SIZE];
	for (int i = 0;i < SIZE;i++) {
		for (int j = 0;j < SIZE;j++) {
			cin >> value;
			m1[i][j] = value;
		}
	}
	cout << "Enter m2 (a 3 by 3 matrix) row by row: " << endl;
	for (int i = 0;i < SIZE;i++) {
		for (int j = 0;j < SIZE;j++) {
			cin >> value;
			m2[i][j] = value;
		}
	}
	bool identical = equals(m1, m2);
	if (identical == true) {
		cout << "The two arrays are strictly equal";
	}
	else {
		cout << "The two arrays are not strictly equal";
	}
}

bool equals(const int m1[][SIZE], const int m2[][SIZE]) {
	for (int i = 0;i < SIZE;i++) {
		for (int j = 0;j < SIZE;j++) {
			if (m1[i][j] != m2[i][j]) {
				return false;
			}
		}
	}
	return true;
}
