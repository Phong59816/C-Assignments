// chapter6_ex13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>

double pi(int i) {
    double value = 0;
    for (int j = 1; j <= i;j++) {
        value += pow(-1, j + 1) / (2.0 * j - 1);
    }
    return 4 * value;
}
int main() {
    cout << "i \t m(i)" << endl;
    for (int i = 1;i <= 901;i += 100) {
        cout << fixed << setprecision(4) << i << "\t" << pi(i) << endl;
    }
}