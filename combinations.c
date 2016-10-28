#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,r;
    int factorial(int);
    printf("\nEnter the total number of things available for arrangement:");
    scanf("%d",&n);
    printf("\nEnter the number of thins taken for arrangement at a time:");
    scanf("%d",&r);
    if(n<r)
    {
        printf("\nInvalid input folk..!!");
        exit(0);
    }
    printf("\nThe number of possible combinatons is %d\n\n",factorial(n)/(factorial(n-r)*factorial(r)));
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
