#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int lower,upper,i,div,sq,rem;
    printf("\nEnter the lower limit of the range:");
    scanf("%d",&lower);
    printf("\nEnter the upper limit of the range:");
    scanf("%d",&upper);
    if(lower==1)
    {
        lower++;
    }
    for(i=lower;i<=upper;i++)
    {
        sq=sqrt(i);
        for(div=2;div<=sq;div++)
        {
            rem=i%div;
            printf("\nThe remainder is %d\n",rem);
            if(rem==0)
            {
                break;
            }
        }
        if(rem!=0)
        printf("\t%d",i);
    }
}
