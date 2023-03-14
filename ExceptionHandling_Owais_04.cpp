/*
Program : C++ program to demonstrate the concept of exception handling.
*/

#include <iostream>
using namespace std;
double zeroDivision(int a, int b) 
{
	if (b == 0) 
    {
		throw "Attempted to divide by zero!";
	}
	return (a / b);
}

int main() 
{
	int x = 5;
	int y = 0;
	double z = 0;

	try 
    {
		z = zeroDivision(x, y);
		cout << "Division = " << z << endl;
	}

	catch (const char* message) 
    {
		cerr << message << endl;
	}

	return 0;
}