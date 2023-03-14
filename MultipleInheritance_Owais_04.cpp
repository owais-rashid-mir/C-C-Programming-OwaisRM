/*
Program : C++ program which creates a multiple inheritance hierarchy of Teacher class
derived from both Person, Employee classes. Each class must implement a show() member 
function and utilize scope resolution operator.
*/

#include <iostream>
#include <string.h>
using namespace std;

class person
{
    public:
    //char name[30];
    string name;
    int age;
    int aadhar;

    // void getData(char *x, int y, int z)
    void getData(string x, int y, int z)
    {
        //strcpy(name, x);
        name = x;
        age = y;
        aadhar = z;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Aadhar no. : " << aadhar << endl;
    }
};

class employee
{
    protected:
    int e_id;

    public:
    void getEmpData(int x)
    {
        e_id = x;
    }

    void show()
    {
        cout << "Employee ID: " << e_id << endl;
    }
};

class teacher : public person, public employee
{
    protected:
    //char school[50];
    //char qual[50];
    string school;
    string qual;
    float salary;

    public:
    void getTchrData(string x, string y, float z)
    {
        //strcpy(school, x);
        //strcpy(qual, y);
        school = x;
        qual = y;
        salary = z;
    }

    void show()
    {
        person :: show();
        employee :: show();
        cout << "Name of school : " << school << endl;
        cout << "Qualification : " << qual << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    teacher t;
    t.getData("Owais Rashid", 23, 14413);
    t.getEmpData(1001);
    t.getTchrData("High School Srinagar", "MCA PhD", 65000);
    t.show();

    return 0;
}