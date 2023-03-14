/*
Program : C++ program to demonstrate the use of pointer to a function- Program 1.
*/

#include <iostream>
using namespace std;

void display(int x)
{
    cout << x << endl;
}
 
 
int main()
{
    void (*foo)(int);   // Function Pointer declaration.
    foo = &display;
 
    display(45);        // Function call.
    (*display)(5);      // WE can also call a function like this.
 
    return 0;
}