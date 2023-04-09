// chapter6_ex18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isPrime(int n) {
	bool prime = true;
	if (n == 0 || n == 1) {
		prime = false;
	}
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			prime = false;
			break;
		}
	}
	return prime;
}

int main()
{
	cout << "Enter a number: ";
	int value;
	cin >> value;
	bool prime = isPrime(value);
	if (prime == true) {
		cout << value << " is a prime number";
	}
	else {
		cout << value << " is NOT a prime number";
	}
}
