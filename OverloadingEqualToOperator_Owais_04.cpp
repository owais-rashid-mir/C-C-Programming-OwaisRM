/*
Program : C++ program to overload comparison operator ==
*/

#include <iostream>
using namespace std;

class box
{
    int len, br, ht;

    public:
    box()   // Default constructor
    {
        len = 0;
        br = 0;
        ht = 0;
    }

    box(int x, int y, int z)   
    {
        len = x;
        br = y;
        ht = z;
    }

    int volume()
    {
        int vol;
        vol = len * br * ht;
        return(vol);
    }

    // Operator function
    int operator == (box b)
    {
        if( volume() == b.volume() )
        {
            return(1);
        }

        else
        {
            return(0);
        }
    }

};

int main()
{
    box b1(2, 3, 4);
    box b2(2, 3, 4);

    if(b1 == b2)
        cout << "Boxes are identical.";

    else
        cout << "Boxes are NOT identical.";

    return 0;
}