/*
Program : C++ program which will arrange the positive and negative numbers in one dimensional array in 
such a way that all positive numbers should come first and then all the negative numbers will come after that, 
without changing the original sequence of numbers.
Example: Original array contains: 10,-15,1,3,-2,0,-2,-3,2,-9. Modified array: 10,1,3,0,2-15,-2,-2,-3,-9
*/

#include <iostream>
using namespace std;

int main ()  
{    
 
    int pos[20], neg[20], a[20], i, j, size, count=0, index=0;

    cout << "Define the number of elements in an array: ";  
    cin >> size;

    cout << "Enter array elements : ";
    for(i=0; i<size; i++)
        cin >> a[i];

    // Arranging elements.
    for(i=0; i<size; i++)
    {
        if (a[i] >= 0)
        {
            pos[index] = a[i];
            index++;
        }
        
        else
        {
            neg[count] = a[i];
            count++;
        }
    }

    for(i=0; i<index; i++)
        a[i] = pos[i];

    for (i=index, j=0; i<size; i++)
    {
        a[i] = neg[j];
        j++;
    }

    cout << "Arranged array : ";
    for(i=0; i<size; i++)
        cout << a[i] << "\t";

    return 0;
}