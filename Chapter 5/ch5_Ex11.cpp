// ch5_Ex11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
int main() {
    string fName;
    string sName;
    string hName;
    double hScore;
    double fScore = 0;
    double sScore = 0;
    int student;
    cout << "Enter the number of students: ";
    cin >> student;
    while (student > 0) {
        cout << "Enter a student name: ";
        cin >> hName;
        cout << "Enter a student score: ";
        cin >> hScore;
        if (hScore > fScore) {
            sName = fName;
            sScore = fScore;
            fName = hName;
            fScore = hScore;
        }
        else if (hScore > sScore) {
            sName = hName;
            sScore = hScore;
        }
        student--;
    }
    cout << "Top two students: " << endl;
    cout << fName << "'s score is " << fScore << endl;
    cout << sName << "'s score is " << sScore;
}