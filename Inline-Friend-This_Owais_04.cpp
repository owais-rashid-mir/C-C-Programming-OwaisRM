/*
Program : C++ program to demonstrate the use of Inline function, Friend function and This keyword.
*/

#include<iostream>
using namespace std;

class myClass
{
    // Private by default; can be accessed outside the class by using Friend function.
    int num1;
    int num2;

    public:
    void setData(int num1, int num2);
    friend int sum(myClass x);      //Friend prototype declaration.
    void putData();
};

void myClass::setData(int num1, int num2)
{
    this->num1 = num1;
    this->num2 = num2;
}

// Inline function
inline void myClass::putData()
{
    cout << "Num1 = " << num1 << endl << "Num2 = " << num2 << endl;
}

int sum(myClass x)
{
    return x.num1 + x.num2;
}

int main()
{
    myClass m1,m2;

    m1.setData(10,20);
    m1.putData();

    cout << "Sum = " << sum(m1);

    return 0;
}