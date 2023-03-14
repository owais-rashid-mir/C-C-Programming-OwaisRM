/*
Program : C program to demonstrate the use of Output statements that draws any object, e.g. Christmas Tree using ‘*’.
*/

#include <stdio.h>
int main()
{
    int row,col,space;
    
    //First triangle(Branch)
    for(row=1; row<=5; row++)
    {
        for(space=row; space<=4; space++)
        {
            printf(" ");
        }

        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    //Second triangle(Branch)
    for(row=3; row<=5; row++)
    {
        for(space=row; space<=4; space++)
        {
            printf(" ");
        }

        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    //Trunk of a tree
    for(row=1; row<=4; row++)
    {
        for(space=1; space<=3; space++)
        {
            printf(" ");
        }

        for(col=1; col<=2; col++)
        {
            printf("| ");
        }
        printf("\n");
    }
    
    return 0;
    //End of program.
}