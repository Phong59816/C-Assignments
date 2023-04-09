// chapter7_ex12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <ctime>

int linearSearch(const int list[], int key, int size) {
    for (int i = 0; i < size;i++) {
        if (key == list[i]) {
            return i;
        }
    }
    return -1;
}

int binarySearch(const int list[], int key, int listSize)
{
    int low = 0;
    int high = listSize - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }
    return -low - 1;
}

void selectionSort(int list[], int size) {
    for (int i = 0;i < size - 1;i++) {
        int currentMin = list[i];
        int currentMinIndex = i;

        for (int j = i + 1;j < size;j++) {
            if (currentMin > list[j]) {
                currentMin = list[j];
                currentMinIndex = j;
            }
        }
        if (currentMinIndex != i) {
            list[currentMinIndex] = list[i];
            list[i] = currentMin;
        }
    }
}

int main()
{
    srand(time(0));
    int list[100000];
    int size = 100000;
    for (int i = 0; i < 100000;i++) {
        list[i] = rand();
    }
    int key = rand();
    long startTime = time(0);
    linearSearch(list, key, size);
    long endTime = time(0);
    long executionTime = endTime - startTime;
    cout << "The execution time of linear search is " << executionTime << " seconds" << endl;

    selectionSort(list, size);

    startTime = time(0);
    binarySearch(list, key, size);
    endTime = time(0);
    executionTime = endTime - startTime;
    cout << "The execution time of binary search is " << executionTime << " seconds";

}

