#include<stdio.h>
#include<stdlib.h>
main()
{
    int lower,upper,sum,i,div;
    printf("\nEnter the lower limit of the range:");
    scanf("%d",&lower);
    printf("\nEnter the upper limit of therange:");
    scanf("%d",&upper);
    for(i=lower;i<=upper;i++)
    {
        sum=0;
        for(div=1;div<=i/2;div++)
        {
            if(i%div==0)
            {
                sum+=div;
            }
        }
        if(sum==i)
        {
            printf("\n%d",i);
        }
    }
    printf("\n\n");
}
