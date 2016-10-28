#include<stdio.h>
main()
{
    int lower,upper;
    printf("\nEnter the lower limit of the range:");
    scanf("%d",&lower);
    printf("\nEnter the upper limit of the range:");
    scanf("%d",&upper);
    do
    {
        if(lower%8==0)
        {
            printf("\t%d",lower);
        }
        lower++;
    }while(lower<=upper);
}
