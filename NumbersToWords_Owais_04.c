/*
Program : Program to convert an amount in figures to equivalent amount in words.
*/

#include<stdio.h>

void numToWord(long , char[]);

char *one[] = {" "," one"," two"," three"," four"," five"," six"," seven",
"eight"," nine"," ten"," eleven"," twelve"," thirteen"," fourteen",
"fifteen"," sixteen"," seventeen"," eighteen"," nineteen"};

char *ten[] = {" "," "," twenty"," thirty"," forty"," fifty"," sixty",
"seventy"," eighty"," ninety"};

int main()
{
    long n;

    printf("Enter any number(upto 9 digits): ");
    scanf("%9ld",&n);

    if(n <= 0)
        printf("Enter numbers greater than 0.");
    else
    {
        numToWord((n/10000000),"crore");
        numToWord(((n/100000)%100),"lakh");
        numToWord(((n/1000)%100),"thousand");
        numToWord(((n/100)%10),"hundred");
        numToWord((n%100)," ");
    }

    return 0;
}

void numToWord(long n , char ch[])
{
    (n>19) ? printf("%s %s ",ten[n/10],one[n%10]) : printf("%s ",one[n]);

    if(n)
        printf("%s ",ch);
}