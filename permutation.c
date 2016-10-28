#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,r;
    int factorial(int);
    printf("\nEnter the total number of things for arrangement:");
    scanf("%d",&n);
    printf("\nEnter the number of things taken at a time for arrangement:");
    scanf("%d",&r);
    if(n<r)
    {
        printf("\nInvalid input folk..!!");
        exit(0);
    }
    printf("\nThe possible permutations are %d\n\n",factorial(n)/factorial(n-r));
}
int factorial(int x)
{
    int fact=1,m;
    for(m=1;m<=x;m++)
    fact*=m;
    return fact;
}
