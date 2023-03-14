/*
Program : C program that demonstrates the use of input statement getchar().
*/

#include <stdio.h>

int main()
{
    char gender;

    //Usage of getchar(). This function reads a single character from the stdin(Standard Input Stream).
    printf("Enter your gender('M' or 'F'): ");
    gender = getchar();

    printf("Gender = ");
    putchar(gender);

    return 0;
    //End of peogram.
}