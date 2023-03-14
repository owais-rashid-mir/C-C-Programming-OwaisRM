/*
Program : C++ program to demonstrate the use of different access specifiers.
*/

class Test 
{
    public:    // Public access specifier
    int a;   // Public attribute

    private:   // Private access specifier
    int b;   // Private attribute

};  // End of class

int main() 
{
    Test obj;
    obj.a = 10;  // Since "a" variable is Public, it is Allowed.

    // Trying to access private data member directly outside the class.
    // Since "b" variable is Private, it is NOT Allowed. Compiler will display an error.
    obj.b = 20;  

    return 0;
}
