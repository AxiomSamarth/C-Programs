#include<stdio.h>
main()
{
    int factorial(int);
    int n,fact;
    printf("\nEnter the integer to find the factorial:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("\nThe factorial of %d is %d\n\n",n,fact);
}
int factorial (int x)
{
    int fact=1,i;
    for(i=1;i<=x;i++)
    {
        fact*=i;
    }
    return fact;
}
