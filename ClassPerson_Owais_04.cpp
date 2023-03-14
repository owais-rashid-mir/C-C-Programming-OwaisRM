/*
Program : C++ program to define class Person having multiple data members for storing the different details of a person, e.g. name, age, address, height etc.
*/

#include <iostream>
using namespace std;

class person
{
    private:
    //char name[25];
    // Using a String instead of a Char so that we can take input of multiple words, like 'Owais Rashid.'
    string name;
    int aadhar;
    int age;
    string address;
    float height;

    public:
    void getData()
    {
        /* Keep the code of string variables 'name' and 'address' above others here. Otherwise
        , the 2nd string variable doesn't work. */
        cout << "Enter your name : " << endl;
        // We're using getline instead of cin so that we can take input of multiple words.
        getline(cin, name);
        cout << "Enter your address : " << endl;
        getline(cin, address);
        cout << "Enter your Aadhar number : " << endl;
        cin >> aadhar;
        cout << "Enter your age : " << endl;
        cin >> age;
        cout << "Enter your height : " << endl;
        cin >> height;
    }

    void displayData()
    {
        cout << "\nName = " << name << endl;
        cout << "Aadhar number = " << aadhar << endl;
        cout << "Age = " << age << endl;
        cout << "Address = " << address << endl;
        cout << "Height = " << height << endl;
    }
};  //End of class.

int main()
{
    person p;
    p.getData();
    p.displayData();

    return 0;
}