/*
Program : C++ program to demonstrate the concept of abstract class.
*/

#include <iostream>  
using namespace std;  

class A    
{    
    public:   
    virtual void display() = 0;    
};    

class B : A    
{    
    public:  
    void display()    
    {    
        cout << "Hello from derived class B." <<endl;    
    }    
};    
    
int main( ) 
{  
    B obj;
    obj.display();

    return 0;  
}  