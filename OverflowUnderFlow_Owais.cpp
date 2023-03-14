/*
Program : C++ program that demonstrates the overflow and underflow of data types.
*/

#include <iostream>
using namespace std;

int main()
{
    /* Overflow occurs when the value assigned to a variable is more than the maximun possible value.
       Underflow occurs when the value assigned to a variable is less than the minimum possible value.
    */

    //Overflow of int data type. Range of int : -2147483648 to 2147483647
    int a = 2147483647;    //Maximum possible value of int data type
    cout << "Maximum possible value of int : " << a << endl;

    /* After incrementing 2147483647 by 1, we WON'T get 2147483648 because we are exceeding the maximum possible value of int data
       type or we are exceeding the upper limit of int type(overflow). Instead, we will get an unexpected result of -2147483648 (overflow results wraps towards the negative side). Some compilers might throw an error instead of displaying this number.  */
    a = a + 1;
    cout<< "After incrementing(overflow): " << a << endl;  

    //Underflow of int data type.
    /* 'a' variable right now holds the value of -2147483648 which is the minimum possible value of int data type. 
        After decrementing -2147483648 by 1, we WON'T get -2147483649. Instead, we will get an unexpected result of 2147483647(Underflow results wraps towards the positive side.)
     */
    a = a - 1;
    cout<< "After decrementing(underflow): " << a << endl;

    return 0;
    //End of program.
}