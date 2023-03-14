/*
Program : C++ program to demonstrate the concept of function overriding.
*/

#include <iostream>
using namespace std;

/*
Here, the same function display() is defined in both Base and Derived classes.
So, when we call display() from the Derived object d, the display() from Derived is executed
by overriding the function in Base.
Had we called the display() function from an object of the Base class, the function would 
not have been overridden.
To access the overridden function of the base class, we use the scope resolution operator :: .
*/
class Base 
{
    public:
    void display() 
    {
        cout << "This is Base Function" << endl;
    }
};

class Derived : public Base 
{
    public:
    void display() 
    {
        cout << "This is Derived Function" << endl;
    }
};

int main() 
{
    Derived d;
    d.display();

    return 0;
}