// ch8_ex25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int SIZE = 3;

bool isMarkovMatrix(const double m[][SIZE]);
bool isMarkovMatrix(const double m[][SIZE]) {
	bool markov = true;
	for (int i = 0;i < SIZE;i++) {
		for (int j = 0; j < SIZE;j++) {
			if (m[i][j] < 0) {
				markov = false;
				return markov;
			}
		}
	}
	for (int i = 0;i < SIZE;i++) {
		double sum = 0;
		for (int j = 0;j < SIZE;j++) {
			sum += m[j][i];
		}
		if (sum != 1) {
			markov = false;
			return markov;
		}
	}
	return markov;
}

int main()
{
	double m[SIZE][SIZE];
	cout << "Enter a 3-by-3 matrix row by row:" << endl;
	double value;
	for (int i = 0;i < SIZE;i++) {
		for (int j = 0;j < SIZE;j++) {
			cin >> value;
			m[i][j] = value;
		}
	}
	bool markov = isMarkovMatrix(m);
	if (markov == true) {
		cout << "It is a Markov matrix";
	}
	else {
		cout << "It is not a Markov matrix";
	}
}