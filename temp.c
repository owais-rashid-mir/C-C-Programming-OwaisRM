#include<stdio.h>
int main()
{
int i,j, isPrime, sum=0;

for(i=100;i<=500;i++)
{
    isPrime=1;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
        isPrime = 0;
        break;
        }
    }

    if(isPrime == 1)
    {
        sum=sum+i;
    }
}
printf("sum of prime numbers between 100 and 500 is %d",sum);
return 0;
}