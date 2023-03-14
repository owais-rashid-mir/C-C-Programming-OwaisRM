/*
Program : C program that demonstrates the use of various input statements like scanf() and getch().
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int age;
    float perc;
    char gender;
    
    //Usage of scanf(). scanf() is one of the commonly used functions used to take input from the user.
    printf("Enter your age, percentage and gender('M' or 'F') : ");
    scanf("%d %f %c",&age , &perc , &gender); 

    printf("Age = %d , Percentage = %f , Gender = %c", age, perc, gender);

    /* Usage of getch(). This function holds the output screen for some time until the user presses a key from the keyboard to exit the console screen. It can also be used to read a single byte character or string from the keyboard and then print.
    It is a non-standard function and is defined in conio.h header file. */
    printf("\nPress a key from the keyboard to exit.");
    getch();

    return 0;
    //End of peogram.
}