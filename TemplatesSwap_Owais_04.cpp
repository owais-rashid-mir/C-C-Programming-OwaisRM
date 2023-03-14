/*
Program : C++ program to swap data using function templates.
*/

#include<iostream>
using namespace std;

template <class T>      // or, template <typename T>
void Swap(T &x, T &y) 
{
    T temp;

    temp = x;
    x = y;
    y = temp;
}

int main() 
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before Swapping:";
    cout << "\nValue of x = " << x;
    cout << "\nValue of y = " << y;

    Swap(x, y);     // Function call

    cout << "\n\nAfter swapping : ";
    cout << "\nValue of x = " << x;
    cout << "\nValue of y = " << y;

    return 0;
}