/*
Program : C++ program to define class complex having two data members viz real and imaginary part.
*/

#include <iostream>
using namespace std;

class complex
{
    private:
    float real;
    float imag;
    
    public:
    void getData(int r, int i)
    {
        real = r;
        imag = i;
    }

    void displayData()
    {
        cout << "Complex Number = " << real << "+i"<< imag;
    }
};  //End of class.

int main()
{
    complex c;
    c.getData(2,3);
    c.displayData();

    return 0;
}