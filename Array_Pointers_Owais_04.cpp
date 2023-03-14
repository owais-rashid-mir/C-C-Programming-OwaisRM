/*
Program : C++ program to demonstrate the array indexing using pointers.
*/

#include <iostream>  
using namespace std;  

int main()  
{  
    int *ptr;   
    int arr[5]; 

    cout << "Enter the elements of an array :" << endl;  
    for(int i=0; i<5; i++)  
    {  
        cin >> arr[i];  
    }  

    ptr = arr; // pointer ptr points to the 0th element of the array.
    //Printing the first element of the array:
    cout << "The value of *ptr is : " << *ptr << endl;  
    cout << "The value of *arr is : " << *arr << endl;  

    //Printing all the elements of the array:
    cout<<"The values in the array are: ";
    for(int i = 0; i < 5; i++) 
    {
      cout<< *ptr << " ";
      ptr++;
    }

    return 0;
}