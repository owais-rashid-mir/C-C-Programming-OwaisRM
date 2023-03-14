/*
Program : C++ program to create a one dimensional array of characters and store a string inside it 
by reading from standard input.
*/

#include <iostream>
using namespace std;

int main()
{
    char str[80];

    cout << "Enter a string: ";
    /* cin function can only read a single string of a line. If, for example, the input entered by the user is 
       "Hello World", it will only print the first part of the input which is "Hello". That's why we use
       cin.get function.
       First argument of the cin.get function is the string name and secong argument is the array size.
    */
    cin.get(str, 80);   

    cout << "You entered: " << str << endl;

    return 0;
}