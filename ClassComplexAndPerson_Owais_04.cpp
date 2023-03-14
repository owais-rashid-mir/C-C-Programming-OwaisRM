/*
Program : C++ program to add member function that displays the contents of class Person and class Complex.
*/

#include <iostream>
using namespace std;

class complex
{
    private:
        float real;
        float imag;

    public:
    void getComplex()
    {
        cout << "Enter the Real part of the complex number : " << endl;
        cin >> real;
        cout << "Enter the Imaginary part of the complex number : " << endl;
        cin >> imag;
    }

    void displayComplex()
    {
        cout << "Complex Number = " << real << "+i"<< imag << endl << endl;
    }
};  //End of class complex.

class person
{
    private:
    char name[25];
    int aadhar;
    int age;
    char address[50];
    float height;
        
    public:
    void getPerson()
    {
        cout << "Enter your name : " << endl;
        cin >> name;
        cout << "Enter your Aadhar number : " << endl;
        cin >> aadhar;
        cout << "Enter your age : " << endl;
        cin >> age;
        cout << "Enter your address : " << endl;
        cin >> address;
        cout << "Enter your height : " << endl;
        cin >> height;
    }

    void displayPerson()
    {
        cout << "\nName = " << name << endl;
        cout << "Aadhar number = " << aadhar << endl;
        cout << "Age = " << age << endl;
        cout << "Address = " << address << endl;
        cout << "Height = " << height << endl;
    }
};  //End of class person.

int main()
{
    complex c;
    c.getComplex();
    c.displayComplex();

    person p;
    p.getPerson();
    p.displayPerson();

    return 0;
}