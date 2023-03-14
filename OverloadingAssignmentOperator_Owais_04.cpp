/*
Program : C++ program to overload the assignment operator =
*/

#include<iostream>
using namespace std;

class assign
{
    public:
    int a,b;

    assign()
    {
        a = b = 0; 
    }

    assign(int x, int y)
    {
        a = x;
        b = y;
    }

    // Operator function
    void operator = (assign ob)
    {
        a = ob.a;
        b = ob.b;
    }

    void display()
    {
        cout << "a = " << a << endl << "b = " << b << endl;
    }

};
 
int main()
{
    int a, b;
    cout << "Enter two values : \n";
    cin >> a >> b;

    assign obj1(a,b), obj2;

    cout << "Values of first object are: \n";
    obj1.display();

    cout << "Values of second object before assignment :\n";
    obj2.display();

    obj2 = obj1;
    cout << "Values of second object after assignment : \n";
    obj2.display();

    return 0;
}