#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,div,sum=0;
    printf("\nEnter the integer whose perfect number nature is to be verified:")    ;
    scanf("%d",&a);
    for(div=1;div<=a/2;div++)
    {
        if(a%div==0)
        {
            sum+=div;
        }
    }
    if(sum==a)
    {
        printf("\nThe integer %d is a perfect number.\n",a);
    }
    else
    {
        printf("\nThe integer %d isn't a perfect number.\n",a);
    }
}
