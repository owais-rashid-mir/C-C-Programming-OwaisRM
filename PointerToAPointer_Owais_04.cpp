/*
Program : C++ program to demonstrate the use of pointer to a pointer (Multiple Indirection).
*/

#include <iostream>
using namespace std;
 
int main () 
{
   int var = 224;
   int *ptr;
   int **pptr;     // A Pointer To A Pointer variable.

   // Taking the address of var:
   ptr = &var;

   // Taking the address of ptr:
   pptr = &ptr;

   cout << "Value of var : " << var << endl;
   cout << "Value available at *ptr : " << *ptr << endl;
   cout << "Value available at **pptr : " << **pptr << endl;

   return 0;
}