// chapter9_ex7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <ctime>

class StopWatch {
private:
	time_t startTime;
	time_t endTime;
public:
	StopWatch();
	void start();
	void stop();
	time_t getElapsedTime();
};

StopWatch::StopWatch() {
	startTime = time(0);
}
void StopWatch::start() {
	startTime = time(0);
}
void StopWatch::stop() {
	endTime = time(0);
}
time_t StopWatch::getElapsedTime() {
	return endTime - startTime;
}

void selectionSort(int list[], int listSize){
    for (int i = 0; i < listSize - 1; i++)
    {
        int currentMin = list[i];
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
int main()
{
    int list[100000];
    srand(time(0));
    for (int i = 0;i < 100000;i++) {
        list[i] = rand();
    }
    StopWatch watch;
    watch.start();
    selectionSort(list, 100000);
    watch.stop();
    cout << "The execution time of sorting 100000 numbers using selection sort is " << watch.getElapsedTime() << " seconds";
}

