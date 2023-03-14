/* Program to check whether a number is prime or not. */

/* Prime numbers are the numbers that have only two factors, that are, 1 and the number itself. In other words,
   a number greater than 1 that is divisible only by itself and 1 is a prime number. (E.g. 2, 3, 5, 7, 11...). */

#include <iostream>
using namespace std;

int main() 
{
    int i, num, count=0;

    cout << "Enter a number : \n";
    cin >> num;

    if(num < 1)
        cout << "Number needs to be greater than 1.";

    else if(num == 1)
        cout << "1 is neither a prime number nor a composite number.";

    else
    {
        for(i=1 ; i<=num ; i++)
        {
            if(num % i == 0)
                count++ ;
        }

        if(count == 2)  //Prime numbers can only have 2 factors, 1 and the number itself.
            cout << "It is a prime number.";

        else
            cout << "It is a composite number (Not a prime number)." ;
    }

    return 0;
}