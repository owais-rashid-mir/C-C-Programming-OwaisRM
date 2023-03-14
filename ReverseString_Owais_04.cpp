/*
Program : C++ program that reverse the contents of a string.
*/

#include <iostream>
// reverse() method is available in the algorithm header file. Alternatively, we can also use #include<bits/stdc++.h> header file.
#include <algorithm>     
using namespace std;

int main() 
{
    // ---------------------------------- Method 1 ------------------------------------------
    string str = "Owais Rashid";
    //Using the reverse() function.
    reverse( str.begin(), str.end() );
    cout << str << endl;


    // ---------------------------------- Method 2 ------------------------------------------
    string str2 = "Hello";
    
    //Initialize reverse with null string value
    string rev = "";
    
    //Iterate input string in reverse order:
    for(int i=str2.length()-1; i>=0; i--)
    {
        //concatenate characters to the reverse
        rev = rev + str2[i];  
    }
    
    cout << rev;

    return 0;
}
