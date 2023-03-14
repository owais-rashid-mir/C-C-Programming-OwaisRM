/*
Program : C++ program to demonstrate the concept of inner/nested class.
*/

#include<iostream>
using namespace std;

class A 
{
    public:
    class B      // Inner/Nested class.
    {
        private:
        int value;

        public:
        void getData(int x) 
        {
            value = x;
        }

        void displayData() 
        {
            cout << "Value = " << value;
        }
    };  // End of nested class B.
};  // End of class A.

int main() 
{
   A :: B obj;

   obj.getData(1001);
   obj.displayData();

   return 0;
}