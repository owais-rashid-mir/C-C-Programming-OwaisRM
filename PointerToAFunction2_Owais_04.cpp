/*
Program : C++ program to demonstrate the use of pointer to a function- Program 2.
*/

#include <iostream>
using namespace std;

void swap( int *a, int *b )
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int num1, num2;
	cout << "Enter first number : " << endl;
	cin >> num1;

	cout << "Enter second number : " << endl;
	cin >> num2;

    cout << "Before swapping, first number = " << num1 << endl;
	cout << "Before swapping, second number = " << num2 << endl;

	swap(&num1, &num2);     // Function call.

	cout << "\nAfter swapping, first number = " << num1 << endl;
	cout << "After swapping, second number = " << num2 << endl;

	return 0;
}