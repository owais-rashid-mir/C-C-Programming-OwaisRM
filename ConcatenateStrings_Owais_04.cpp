/*
Program : C++ program to concatenate two strings without using the inbuilt function.
*/

#include <iostream>
using namespace std;

int main()
{
    // ----------------------------------Method 1: -----------------------------------
    string s1, s2, res;

    cout << "Enter the first string: ";
    getline (cin, s1);

    cout << "Enter the second string: ";
    getline (cin, s2);

    res = s1 + s2;

    cout << "Concatenated String (Method 1) = "<< res << endl << endl;


    // ---------------------------------- Method 2: ------------------------------------
    string str3, str4, result; 
    int k;  

    cout <<"Enter the third string: ";  
    cin >> str3;

    cout << "Enter the fourth string: ";  
    cin >> str4;

    // Using For loop to enter the characters of the str3 into result string.   
    for (k=0; k<str3.size(); k++)  
    {  
        result = result + str3[k];   // add character of the str3 into result   
    }   
    
    // use for loop to enter the characters of the str4 into result string.  
    for (k=0; k<str4.size(); k++)  
    {  
        result = result + str4[k];  // add character of the str4 into result   
    }  

    cout << "Concatenated String (Method 2) = " << result << endl << endl;  


    // ---------------------------------- Method 3: ------------------------------------
    char str5[50] = "Owais", str6[50] = "Rashid";
  
    // Declare a new Strings to store the concatenated String
    char str7[50];
  
    int i = 0, j = 0;
  
    // Insert the str5 in the new string
    while (str5[i] != '\0')
    {
        str7[j] = str5[i];
        i++;
        j++;
    }
  
    // Insert the str6 in the new string
    i = 0;
    while (str6[i] != '\0') 
    {
        str7[j] = str6[i];
        i++;
        j++;
    }
    str7[j] = '\0';
  
    cout << "Concatenated String (Method 3) = " << str7 << endl;
  
    return 0;
}