/*
Program : C program that reads in a month number and outputs the month name.
*/

#include <stdio.h>

int main()
{
    int month_no;
    printf("Enter The Month Number : ");
    scanf("%d", &month_no);

    switch(month_no)
    {
        case 1:
            printf("Month Number 1 is January\n");
            break;

        case 2:
            printf("Month Number 2 is February\n");
            break;

        case 3:
            printf("Month Number 3 is March\n");
            break;

        case 4:
            printf("Month Number 4 is April\n");
            break;

        case 5:
            printf("Month Number 5 is May\n");
            break;

        case 6:
            printf("Month Number 6 is June\n");
            break;

        case 7:
            printf("Month Number 7 is July\n");
            break;

        case 8:
            printf("Month Number 8 is August\n");
            break;

        case 9:
            printf("Month Number 9 is September\n");
            break;

        case 10:
            printf("Month Number 10 is October\n");
            break;

        case 11:
            printf("Month Number 11 is November\n");
            break;

        case 12:
            printf("Month Number 12 is December\n");
            break;

        default:
            printf("The Entered Month number Is Invalid. \nPlease try again. \n");
            break;
    }   //End of Switch.

    return 0;
    //End
}
