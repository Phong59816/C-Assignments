// Ch2_Ex10.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Name: Phong Tran
Date: 1/4/23
Project: Chapter 2 Exercise 10
Description: This program calculates the energy needed to heat water from an initial temperature to a final temperature
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the amount of water in kilograms: ";
	double mass;
	cin >> mass;
	cout << "Enter the initial temperature: ";
	double initial;
	cin >> initial;
	cout << "Enter the final temperature: ";
	double final;
	cin >> final;
	double energy = mass * (final - initial) * 4184;
	cout << "The energy needed is " << energy;
}