#include<stdio.h>
main()
{
    int a,div,fact=1;
    printf("\nEnter the integer:");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\n0 or 1 is the factorial root of 1");
        exit(0);
    }
    for(div=1;fact<a;div++)
    {
        fact*=div;
    }
    if(fact==a)
    {
        printf("\n%d is the factorial root of %d\n\n",div-1,a);
    }
    else
    {
        printf("\nThe integer %d is not a factorial number to find it's root.\n\n",a);
    }
}
