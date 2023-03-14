/*
Program : Write a program to input 20 arbitrary numbers in one dimensional array. Calculate the frequency of each number.
*/

#include <iostream>
using namespace std;

int main()
{
    /* freq will store frequencies of all 20 array elements. It has same size as of input array size to store
       frequency of each array elements. */
    int arr[20], freq[20];  
    int i, j, count;

    cout << "Enter any 20 elements in array: ";
    for(i=0; i<20 ; i++)
    {
        cin >> arr[i];

        freq[i] = -1;
    }

    /* To count frequency of each element, we require two loops. One outer loop to select an array element.
       Second inner loop to find first duplicate element of the currently selected array element by outer loop.
    */
    for(i=0; i<20; i++)
    {
        /* Initialize count variable with 1 to count total frequency of the currently selected
            array element. */
        count = 1;

        /* Run an inner loop to count total duplicates of currently selected array element. */
        for(j=i+1; j<20; j++)
        {
            /* If duplicate element is found */
            if(arr[i] == arr[j])
            {
                count++;

                /* Make sure not to count frequency of same element again */
                freq[j] = 0;
            }
        }

        /* If frequency of current element is not counted */
        if(freq[i] != 0)
        {
            /* After all duplicates are counted, store total duplicate count of current element in frequency array- freq[i] = count. */
            freq[i] = count;
        }
    }

    //Printing frequencies.
    cout << "\nFrequency of all elements of array : \n";
    for(i=0; i<20; i++)
    {
        if(freq[i] != 0)
        {
            cout << arr[i] << " occurs " << freq[i] << " times. \n";
        }
    }

    return 0;
}