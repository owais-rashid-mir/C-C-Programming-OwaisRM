/*
Program : C++ program to generate a sequence of numbers in both ascending and descending order.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[90], n, i, j, temp;

    cout << "Enter the number of elements you want to sort in ascending and descending order: \n";
    cin >> n;

    cout << "Enter the elements: \n";
    for(i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    cout << "Entered elements are: \t";
    for(i=0 ; i<n ; i++)
    {
        cout << arr[i] << " \t "; 
    }

    //Sorting
    for(i=0 ; i<n ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nSequence in ascending order is : \t";
    for(i=0 ; i<n ; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\nSequence in descending order is : \t";
    for(i=n-1 ; i>=0 ; i--)
    {
        cout << arr[i] << "\t";
    }


    return 0;
    //End of program.
}
