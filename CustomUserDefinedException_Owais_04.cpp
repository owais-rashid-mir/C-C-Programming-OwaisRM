/*
Program : C++ program to create a custom exception.
*/

#include <iostream>  
#include <exception>  
using namespace std;  

class division : public exception
{  
    public:  
        const char * what() const throw()  
        {  
            return "Attempted to divide by zero!\n";  
        }  
};  

int main()  
{  
    try  
    {  
        int x, y;  
        cout << "Enter two numbers : \n";  
        cin >> x >> y;  
        if (y == 0)  
        {  
            division d;  
            throw d;  
        }  
        else  
        {  
            cout << "Division = " << x/y << endl;  
        }  
    }  
    
    catch(exception& e)  
    {  
        cout << e.what();  
    }  
}  