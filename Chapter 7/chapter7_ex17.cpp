// chapter7_ex17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
	srand(time(NULL));

	int list[50];
	for (int i = 0;i < 50;i++) {
		list[i] = 0;
	}
	cout << "Enter the number of balls to drop: ";
	int balls;
	cin >> balls;
	cout << "Enter the number of slots(maximum 50): ";
	int slots;
	cin >> slots;
	for (int i = 0; i < balls;i++) {
		int count = 0;
		for (int j = 0; j < slots;j++) {
			int random = rand() % 2;
			count = count + random;
			if (random == 0) {
				cout << "L";
			}
			else {
				cout << "R";
			}
		}
		list[count] = list[count]++;
		cout << endl;
	}
	int max = list[0];
	for (int i = 1;i < slots; i++) {
		if (max < list[i])
			max = list[i];
	}
	for (int i = max;i > 0; i--) {
		for (int j = 0;j < slots;j++) {
			if (list[j] >= max) {
				cout << "O";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
		max--;
	}
}
