/*
Program : C++ program to create a simple calculator which can add, subtract, multiply 
and divide two numbers using class template.
*/

#include <iostream>
using namespace std;

template <class T>
class Calc
{
    private:
        T num1, num2;
        
    public:
        Calc(T x, T y)
        {
                num1 = x;
                num2 = y;
        }
        
        void display()
        {
                cout << "Numbers : " << num1 << "\t" << num2 << endl;
                cout << "Addition : " << add() << endl;
                cout << "Subtraction : " << subtract() << endl;
                cout << "Product : " << multiply() << endl;
                cout << "Division : " << divide() << endl;
        }
        
        T add() 
        {
            return num1 + num2; 
        }
        
        T subtract() 
        { 
            return num1 - num2; 
        }
        
        T multiply() 
        { 
            return num1 * num2; 
        }
        
        T divide() 
        { 
            return num1 / num2; 
        }
};

int main()
{
    int i1, i2;
    cout << "Enter two Integer numbers : " << endl;
    cin >> i1 >> i2;

    float f1, f2;
    cout << "Enter two floating-point numbers : " << endl;
    cin >> f1 >> f2;

    Calc<int> computeInt(i1, i2);
    Calc<float> computeFloat(f1, f2);
        
    cout << "\nThe computed results for the entered integers = " << endl;
    computeInt.display();
        
    cout << endl << "The computed results for the entered floating-point numbers = " << endl;
    computeFloat.display();
        
    return 0;
}
