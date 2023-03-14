/*
Program : C++ program to demonstrate the use of pure virtual functions and virtual destructors.
*/

#include <iostream>  
using namespace std;  

class A    
{    
    public:   
    virtual void display() = 0;    // Pure virtual function.

    virtual ~A()    // Virtual destructor.
    {
        cout << "Object of class A is deleted."<<endl;
    }
};    

class B : A    
{    
    public:  
    void display()    
    {    
        cout << "Hello from derived class B." <<endl;    
    }    

    ~B()
    {
        cout << "Object of derived class B is deleted."<<endl;
    }
};    
    
int main( ) 
{  
    B obj;
    obj.display();

    return 0;  
}  