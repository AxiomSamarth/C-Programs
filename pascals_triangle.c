#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,i,j,k;
    int factorial(int);
    printf("\nEnter how many rows of pascal's triangle you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf(" %d",factorial(i)/(factorial(i-k)*factorial(k)));
        }
    }
}
int factorial(int x)
{
    int fact=1,m;
    for(m=1;m<=x;m++)
    {
        fact*=m;
    }
    return fact;
}
