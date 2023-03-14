/*
Program : C++ program to generate Pascal's triangle.
*/

#include <iostream>
using namespace std;

int main() 
{
    //Pascal's Triangle is a triangular array constructed by summing adjacent elements in preceeding rows.

    int n;

    cout << "Enter the number of rows for Pascal's trinagle:\n";
    cin >> n;

    for(int i=0 ; i<n ; i++)
    {
        int num = 1;    //First value of pascal's triangle

        //For spacing and creating a triangular pattern:
        for(int j=0 ; j<n-i-1 ; j++)
        {
            cout << " ";
        }

        for(int k=0 ; k<=i ; k++)
        {
            cout << num << " ";
            num = num*(i-k)/(k+1);  //Derived from Binomial Theorem.
        }
        
        cout<<endl;
    }

    return 0;
    //End of program.  
}