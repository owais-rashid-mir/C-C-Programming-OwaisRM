/*
Program : C++ program to demonstrate the use of virtual functions and polymorphism.
*/

#include <iostream>  
using namespace std;

// Run-time polymorphism.
class Base
{
    public:
    /* If the functions of the Base class are NOT virtual, then we won't be able to display the
    functions of the Derived class.
    A virtual function is used in the base class in order to ensure that the function is overridden. */
    virtual void print()    // Virtual function.
    {
        cout << "print() function of Base class. \n";
    }

    virtual void show()
    {
        cout << "show() function of Base class. \n";
    }
};

class Derived : public Base
{
    public:
    void print()
    {
        cout << "print() function of Derived class. \n";
    }

    void show()
    {
        cout << "show() function of Derived class. \n";
    }
};

int main()
{
    Derived d;
    Base *bptr;
    Base b;

    bptr = &d;
    bptr -> print();
    bptr -> show();

    return 0;
}