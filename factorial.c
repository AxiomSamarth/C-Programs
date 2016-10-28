#include<stdio.h>
main()
{
    int n,fact=1,i;
    printf("\nEnter the integer:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("\nThe factorial of %d is %d\n\n",n,fact);
}
