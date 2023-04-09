// ch13_ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include <algorithm>
using namespace std;

int main()
{
	int list[100];
	fstream inout("Exercise13_4.txt",ios::out,ios::in);
	int num;
	for (int i = 0;i < 100;i++) {
		inout >> num;
		list[i] = num;
	}
	sort(begin(list),end(list));
	for (int i = 0;i < 100;i++) {
		inout << list[i] << " ";
	}
	inout.close();
}
