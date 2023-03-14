/*
Program : C++ program to demonstrate the use of scope resolution operator :: 
*/

// Using scope resolution operator :: to define a function outside a class.
#include <iostream> 
using namespace std;
  
class myClass
{
    public: 
    // Only declaration.
    void display();
};
  
// Definition outside the class using scope resolution operator ::
void myClass::display()
{
   cout << "Heyaa! How are you doing?";
}
  
int main()
{
   myClass m;
   m.display();

   return 0;
}