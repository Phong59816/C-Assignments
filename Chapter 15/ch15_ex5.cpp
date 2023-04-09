// ch15_ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <vector>

template<typename T>
class Stack : public vector<T>
{
public:
    Stack();
    bool empty() const;
    T peek() const;
    void push(T value);
    T pop();
    int getSize() const;

private:
    vector<T> elements;
    int size;
};

template<typename T>
Stack<T>::Stack()
{
    size = 0;
}

template<typename T>
bool Stack<T>::empty() const
{
    return size == 0;
}

template<typename T>
T Stack<T>::peek() const
{
    return elements[size - 1];
}

template<typename T> // implement push function
void Stack<T>::push(T value)
{
    elements.push_back(value);
    size++;
}

template<typename T>
T Stack<T>::pop()
{
    return elements[--size];
}

template<typename T>
int Stack<T>::getSize() const
{
    return size;
}


int main()
{
    // Create a stack of int values
    Stack<int> intStack;
    for (int i = 0; i < 10; i++)
        intStack.push(i); // Push i into the stack

    while (!intStack.empty())
        cout << intStack.pop() << " ";
    cout << endl;

    // Create a stack of strings
    Stack<string> stringStack;
    stringStack.push("Chicago");
    stringStack.push("Denver");
    stringStack.push("London"); // Push London to the stack

    while (!stringStack.empty())
        cout << stringStack.pop() << " ";
    cout << endl;

    return 0;
}