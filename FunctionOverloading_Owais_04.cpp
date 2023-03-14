/*
Program : C++ program to demonstrate the use of function overloading.
*/

#include <iostream>    
using namespace std;  

class computeSum
{    
    public:   
    // Function overloading by changing the number of arguments of add() function.
    int add(int a,int b)
    {      
        return a + b;      
    }     

    int add(int a, int b, int c)      
    {      
        return a + b + c;      
    } 

    // Function overloading by changing the type of arguments of add() function.
    float add(double a, double b)      
    {      
        return a + b;      
    }

    float add(double a, int b)      
    {      
        return a + b;      
    } 



};     

int main()
{    
    computeSum c;     

    cout << c.add(5, 5) << endl;      
    cout << c.add(10, 20, 30) << endl;
    cout << c.add(10.5, 5.0) << endl;  
    cout << c.add(20.5, 5) << endl;  

    return 0;    
}    