// ch15_ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
using namespace std;

class GeometricObject
{
public:
    GeometricObject();
    GeometricObject(const string& color, bool filled);
    string getColor() const;
    void setColor(const string& color);
    bool isFilled() const;
    void setFilled(bool filled);
    string toString() const;

private:
    string color;
    bool filled;
};

GeometricObject::GeometricObject()
{
    color = "white";
    filled = false;
}

GeometricObject::GeometricObject(const string& color, bool filled)
{
    this->color = color;
    this->filled = filled;
}

string GeometricObject::getColor() const
{
    return color;
}

void GeometricObject::setColor(const string& color)
{
    this->color = color;
}

bool GeometricObject::isFilled() const
{
    return filled;
}

void GeometricObject::setFilled(bool filled)
{
    this->filled = filled;
}

string GeometricObject::toString() const
{
    return "Geometric Object";
}

class Triangle : public GeometricObject {
private:
    double side1, side2, side3;
public:
    Triangle() {
        side1 = side2 = side3 = 1.0;
    }
    Triangle(double side1, double side2, double side3) {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }
    double getSide1() const {
        return side1;
    }
    double getSide2() const {
        return side2;
    }
    double getSide3() const {
        return side3;
    }
    double getArea() const {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double getPerimeter() const {
        return side1 + side2 + side3;
    }

};

int main()
{
    double side1, side2, side3;
    cout << "Enter three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    string color;
    cout << "Enter a color: ";
    cin >> color;
    cout << "Enter a 1 or 0 to indicate whether the triangle is filled: ";
    int filled;
    cin >> filled;
    Triangle t1(side1, side2, side3);
    t1.setColor(color);
    t1.setFilled(filled);
    cout << "The area of the triangle is: " << t1.getArea() << endl;
    cout << "The perimeter of the triangle is: " << t1.getPerimeter() << endl;
    if (t1.isFilled()) {
        cout << "The color of the triangle is: " << t1.getColor() << " and it is filled";
    }
    else {
        cout << "The color of the triangle is: " << t1.getColor() << " and it is not filled";
    }
}