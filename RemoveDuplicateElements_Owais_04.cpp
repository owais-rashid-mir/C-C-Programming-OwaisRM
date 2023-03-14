/*
Program : C++ Program to remove duplicates from an ordered array.
*/

#include <iostream>
using namespace std;

int main ()  
{    
    int arr[50], i, j, k, size;  
      
    cout << "Define the number of elements in an array: ";  
    cin >> size;
      
    cout << "\n Enter elements of an array: \n";  
    // Using For loop to enter the elements one by one in an array.  
    for (i=0 ; i<size ; i++)  
    {  
        cin >> arr[i];  
    }  
      
      
    // Using nested For loop to find the duplicate elements in the array.  
    for ( i=0 ; i<size ; i++)  
    {  
        for (j=i+1 ; j<size ; j++)  
        {  
            // Using If statement to check duplicate elements. 
            if (arr[i] == arr[j])  
            {  
                // Delete the current position of the duplicate element. 
                for (k=j ; k<size-1 ; k++)  
                {  
                    arr[k] = arr[k + 1];  
                }  
                // Decrease the size of the array after removing the duplicate element.  
                size--;  
                  
                // if the position of the elements is changed, don't increase the index j.
                j--;      
            }  //End of If.
        }  //End of inner For loop.
    }  //End of outer For loop.
      
      
    /* Displaying the array after the deletion or removal of the duplicate elements. */  
    cout << "\n Array elements after the deletion of the duplicate elements : ";   
    for(i=0 ; i<size ; i++)  
    {  
        cout << arr[i] << "\t";  
    }  
    
    return 0;  
}  