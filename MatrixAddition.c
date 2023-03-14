/*
Program : C program to compute addition of a 2-D array - Matrix addition.
*/

#include<stdio.h>

int main()
{
    int mat1[3][3] , mat2[3][3] , mat3[3][3];
    int i, j;

    printf("Enter elements for Matrix 1: \n");
    for(i=0; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter elements for Matrix 2: \n");
    for(i=0; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }


    printf("Entered elements in Matrix 1:\n" );
    for(i=0; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Entered elements in Matrix 2:\n" );
    for(i=0; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Adding Matrices
    for(i=0; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }

    }


    printf("The sum of Matrix 1 and Matrix 2 = \n");
    for(i=0; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }



    return 0;
}
