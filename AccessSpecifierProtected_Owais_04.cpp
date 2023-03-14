/*
Program : C++ program to demonstrate the use of Protected access specifier.
*/

#include <iostream>
using namespace std;
 
// Base class
class Parent
{  
    /* Protected access modifier is similar to private access modifier in the sense that 
       it can’t be accessed outside of its class unless with the help of a friend class. 
       The difference is that the class members declared as Protected can be accessed by 
       any subclass(derived class) of that class as well.
    */
    protected:  
    int a;     // protected data member.
};
 
// Sub/Derived/Child class is derived from public Base class.
class Child : public Parent
{
    public:
    void setValue(int x)
    {   
        // Child class is able to access the inherited protected data members of Base class.
        a = x;    
    }
     
    void display()
    {
        cout << "Value of 'a' = " << a << endl;
    }
};
 

int main() 
{
    Child obj;
     
    // Member function of the derived/child class can access the protected data members of the base class. 
    obj.setValue(10);
    obj.display();

    return 0;
}