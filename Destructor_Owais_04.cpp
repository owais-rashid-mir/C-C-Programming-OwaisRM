/*
Program : C++ program to show the use of destructors. 
*/

#include<iostream>
using namespace std;

class test
{
    public:
    test()
    {
        cout<<"Constructor invoked. \n";
    }

    ~test()
    {
        cout<<"Destructor invoked. \n";
    }
    
};  // End of class

int main()
{
    test obj;

    return 0;
}
