/*
Program : C++ program to check whether a string is a palindrome or not - Method 1.
*/

#include <iostream>
using namespace std;
 
int main()
{
    // A palindrome is a string, which when read in both forward and backward ways is the same. E.g: madam, lol.

    string str, rev="";
        
    cout<<"Enter a string: ";
    cin >> str;
    
    // Reverse String
    for(int i=str.length()-1; i>=0; i--)
    {
        //if the character is in upper case, transform it to lower case:
        if(str[i]>=65 && str[i]<=90)
            str[i] = str[i]+32;
            
        //assign the character to reverse string variable
        rev +=str[i];
    }
    
    // Compare the reverse with the input string
    if(rev == str)
        cout << "String is Palindrome";

    else
        cout << "String is Not Palindrome";

    return 0;
}