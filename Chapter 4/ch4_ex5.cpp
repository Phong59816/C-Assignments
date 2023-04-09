// ch4_ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double side;
    double length;
    double area;
    double pi = 3.14159;
    cout << "Enter the number of sides: ";
    cin >> side;
    cout << "Enter the side: ";
    cin >> length;
    area = side * pow(length, 2) / (4 * tan(pi / side));
    cout << "The area of the polygon is " << area;
}

