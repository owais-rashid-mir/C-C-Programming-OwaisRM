/*
Program : C++ program to overload the unary ++ operator.
*/

#include<iostream>
using namespace std;

class test
{
    int a, b, c;

    public:
        void getData(int x, int y, int z)
        {
            a = x;
            b = y;
            c = z;
        }

        void display()
        {
            cout << "a = " << a << endl << "b = " << b << endl << "c = " <<c << endl << endl;
        }

        // Operator function - Overloading unary ++
        void operator ++ ()
        {
            a++;
            b++;
            c++;
        }
};

int main()
{
    test s;
    s.getData(1,2,3);
    s.display();

    ++s;  //Activates operator function
    s.display();

    return 0;
}
