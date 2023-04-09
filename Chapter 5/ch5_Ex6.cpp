//  ch5_Ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iomanip>

int main(){
	cout  << setw(15) << left << setw(15) << "Miles" << setw(15) << "Kilometers" << "|\t\t" << setw(15) << "Kilometers" << "Miles" << endl;
	double km = 20;
	double m = 1;
	while (m <= 10) {
		double ckm = m * 1.609;
		double cm = km / 1.609;
		cout << fixed <<setw(15) << left << setprecision(0) << m << setprecision(3) << setw(15) << ckm << "|\t\t" << setprecision(0) << setw(15) << km <<setprecision(3) << cm << endl;
		m++;
		km += 5;
	}
}

