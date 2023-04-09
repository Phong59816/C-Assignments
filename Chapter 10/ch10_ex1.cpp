// ch10_ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void selectionSort(char list[], int listSize)
{
	for (int i = 0; i < listSize - 1; i++)
	{
		char currentMin = list[i];
		int currentMinIndex = i;

		for (int j = i + 1; j < listSize; j++)
		{
			if (currentMin > list[j])
			{
				currentMin = list[j];
				currentMinIndex = j;
			}
		}
		if (currentMinIndex != i)
		{
			list[currentMinIndex] = list[i];
			list[i] = currentMin;
		}
	}
}

bool isAnagram(const string& s1, const string& s2) {
	bool anagram = true;
	int s1Length = s1.length();
	int s2Length = s2.length();
	if (s1Length != s2Length) {
		return false;
	}
	char array1[20];
	char array2[20];
	for (int i = 0;i < s1Length;i++) {
		array1[i] = s1.at(i);
		array2[i] = s2.at(i);
	}
	selectionSort(array1, s1Length);
	selectionSort(array2, s1Length);
	for (int i = 0;i < s1Length;i++) {
		if (array1[i] != array2[i]) {
			anagram = false;
		}
	}
	return anagram;
}

int main()
{
	cout << "Enter a string s1: ";
	string s1;
	cin >> s1;
	cout << "Enter a string s2: ";
	string s2;
	cin >> s2;
	bool anagram = isAnagram(s1, s2);
	if (anagram) {
		cout << s1 << " and " << s2 << " are anagrams";
	}
	else {
		cout << s1 << " and " << s2 << " are not anagrams";
	}
}
