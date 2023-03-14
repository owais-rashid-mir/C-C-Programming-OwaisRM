/*
Program : C++ program to reverse the digits of a given number.
*/

#include <iostream>
using namespace std;

int main() 
{
    // rem = Stores the Remainder.   revNum = Stores the Reverse of the number.  
    int num, rem, revNum = 0;   

    cout << "Enter an integer: \n";    
    cin >> num;

    while(num > 0)    
    {    
        rem = num % 10;    
        num = num / 10;  
        revNum = (revNum * 10) + rem;       
    }  

    cout << "Reversed Number is : " << revNum <<endl;

    return 0;
    //End of program.  
}