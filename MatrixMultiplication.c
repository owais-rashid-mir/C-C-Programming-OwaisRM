/*
Program : C program to compute multiplication of a 2-D array - Matrix multiplication.
*/

#include<stdio.h>

int main()
{
    int mat1[3][3] , mat2[3][3] , mat3[3][3];
    int i,j,k,sum;

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

    //Multiplying Matrices
    for(i=0; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            sum=0;
            for(k=0 ; k<3 ; k++)
                sum = sum + mat1[i][k] * mat2[k][j];
            mat3[i][j] = sum;
        }

    }


    printf("The product of Matrix 1 and Matrix 2 = \n");
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

