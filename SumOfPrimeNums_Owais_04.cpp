/*
Program : C++ program to find sum of all prime numbers between 100 and 500.
*/

/* Prime numbers are the numbers that have only two factors, that are, 1 and the number itself. In other words,
   a number greater than 1 that is divisible only by itself and 1 is a prime number. (E.g. 2, 3, 5, 7, 11...). */

#include <iostream>
using namespace std;

int main() 
{
    int i, j, count, sum=0;

    for(i=100 ; i<=500 ; i++)   // We've to find the sum of all prime numbers between 100 and 500.
    { 
        count = 0;
        for(j=1 ; j<=i ; j++)
        {
            if(i % j == 0)
                count++ ;
        }

        if(count == 2)  //Prime numbers can only have 2 factors, 1 and the number itself.
        {
            cout << i << "\t" ;     // Printing all the prime numbers between 100 and 500.
            sum = sum + i;      // Adding all the prime numbers between 100 and 500.
        }  

    }
    
    cout << "\n \nSum of prime numbers between 100 and 500 is : " << sum ;

    return 0;
}