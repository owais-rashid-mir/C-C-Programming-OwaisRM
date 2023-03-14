/*
Program : C++ program to demonstrate the precedence of various operators.
*/

#include <iostream>
using namespace std;

int main()
{
    /* ‘/’ operator has higher precedence and is first performed, and then ‘+’ operator is performed. So, 20/2 = 10 is evaluated first and then this 10 is added to the 5. 10+5 = 15, which is the answer. */
    int a = 5 + 20 / 2;
    cout << "The result of the expression is :" << a << endl;

    /* '()’ is first performed(as subexpression) which is having the ‘+’ operator, followed by the ‘/’ operator. So, 10+40 = 50 is evaluated first and then this 50 is divided by 2. 50/2 = 25, which is the answer. */
    int b = (10 + 40) / 2;
    cout << "The result of the expression is :" << b << endl;

    /* '*' and '/' operators have same precedence but the associativity is left to right. Therefore, 10*10 = 100 gets evaluated
        first and then this 100 is divided by 2. 100/2 = 50, which is the answer. */
    int c = 10 * 10 / 2;
    cout << "The result of the expression is :" << c << endl;

    /* '==' and '!=' operators have same precedence but the associativity is left to right. So, '==' is performed first and
        then '!=' . 37==47 will yield 0 (as it is false) and 0 != 9 will yield 1 (as it is true). So, the output is 1. */
    int d = 37 == 47 != 9;
    cout << "The result of the expression is :" << d << endl;

    /* All the '>' operators have same precedence but the associativity is left to right. So, leftmost '>' is performed first 
    and then the second '>' . 14>30 will yield 0 (as it is false) and 0>4 will also yield 0 (as it is false also).
     So, the output is 0. */
    int e = 14 > 30 > 4;
    cout << "The result of the expression is :" << e << endl;


    return 0;
    //End of program.
}