/*
Program :  C++ program to check if two strings are same or not.
*/

#include <iostream>   
#include <string.h>  

using namespace std; 
  
int main() 
{
   char string1[] = {"Hello"};
   char string2[] = {"Hello"};

   //using function strcmp() to compare the two strings. This function is case-sensitive.
   if (strcmp(string1, string2) == 0)
      printf("Yes, the 2 strings are same.\n");

   else
      printf("No, the 2 strings are not same\n" );
      return 0;
}