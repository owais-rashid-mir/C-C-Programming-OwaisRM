/*
Program : C++ program which creates objects of a class using default, overloaded and copy constructors. 
*/

#include <iostream> 
using namespace std;

class test
{
    int a, b;

    public:
    test()   //Default constructor
    {
        a = 0;
        b = 0;
    }

    // Constructor overloading:
    test(int x)      // Parametrized constructor with one argument.
    {
        a = x;
        b = x;
    }

    test(int y, int z)      // Parametrized constructor with two arguments.
    {
        a = y;
        b = z;
    }

    void display()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl << endl;
    }

};  // End of class 

int main()
{
    test t1;
    t1.display();

    test t2(3);
    t2.display();

    test t3(4, 5);
    t3.display();

    // Copy constructor :
    test t4;
    t4 = t3;
    t4.display();

    return 0;
}