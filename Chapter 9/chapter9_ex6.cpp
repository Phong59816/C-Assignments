// chapter9_ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class QuadraticEquation {
private:
	double a, b, c;
public:
	QuadraticEquation(double a, double b, double c);
	double getA();
	double getB();
	double getC();
	double getDiscriminant();
	double getRoot1();
	double getRoot2();
};

QuadraticEquation::QuadraticEquation(double ax, double bx, double cx) {
	a = ax;
	b = bx;
	c = cx;
}
double QuadraticEquation::getA() {
	return a;
}
double QuadraticEquation::getB() {
	return b;
}
double QuadraticEquation::getC() {
	return c;
}
double QuadraticEquation::getDiscriminant() {
	return pow(b, 2) - 4 * a * c;
}
double QuadraticEquation::getRoot1() {
	if (getDiscriminant() < 0) {
		return 0;
	}
	else {
		return (-b + sqrt(getDiscriminant())) / (2 * a);
	}
}
double QuadraticEquation::getRoot2() {
	if (getDiscriminant() < 0) {
		return 0;
	}
	else {
		return (-b - sqrt(getDiscriminant())) / (2 * a);
	}
}

int main()
{
	double a, b, c;
	cout << "Enter a, b, c: ";
	cin >> a >> b >> c;
	QuadraticEquation quad(a, b, c);
	if (quad.getDiscriminant() > 0) {
		cout << "The root are " << quad.getRoot1() << " and " << quad.getRoot2();
	}
	else if (quad.getDiscriminant() == 0) {
		cout << "The root is " << quad.getRoot1();
	}
	else {
		cout << "The equation has no real roots";
	}
}
