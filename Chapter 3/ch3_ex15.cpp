// ch3_ex15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cmath>
#include<ctime>
int main()
{
	cout << "scissor (0), rock (1), paper (2): ";
	int player;
	srand(time(0));
	int cpu = rand() % (2 + 1);
	cin >> player;
	cout << cpu << endl;
	switch (player) {
	case 0:
		if (cpu == 0) {
			cout << "Computer is scissor. You are scissor too. It is a draw";
		}
		else if (cpu == 1) {
			cout << "Computer is rock. You are scissor. Computer won";
		}
		else if (cpu == 2) {
			cout << "Computer is paper. You are scissor. You won";
		}
		break;
	case 1:
		if (cpu == 0) {
			cout << "Computer is scissor. You are rock too. you won";
		}
		else if (cpu == 1) {
			cout << "Computer is rock. You are rock. It is a draw";
		}
		else if (cpu == 2) {
			cout << "Computer is paper. You are rock. Computer won";
		}
		break;
	case 2:
		if (cpu == 0) {
			cout << "Computer is scissor. You are paper too. Computer won";
		}
		else if (cpu == 1) {
			cout << "Computer is rock. You are paper. you won";
		}
		else if (cpu == 2) {
			cout << "Computer is paper. You are paper. It is a draw";
		}
		break;
	}
}