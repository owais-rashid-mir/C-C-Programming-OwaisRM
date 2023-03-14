/*
Program : C++ program to overload the ‘+’ operator so that it can add two matrices.
*/

#include <iostream>
using namespace std;

class matrices
{
    int a[2][2];
    int b[2][2];
    int c[2][2];

    public:
    void getData()
    {
        cout << "Enter the elements :";
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << endl;
    }

    void display()
    {
        cout << "The sum of matrices = \n";
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

    }

    // Operaror function
    matrices operator + (matrices m)
    {
        matrices temp;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }
        return(temp);
    }
   
};


int main()
{
    matrices obj1, obj2, obj3;
    obj1.getData();
    obj2.getData();
    obj3 = obj1 + obj2;

    obj3.display();

    return 0;
}