#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int lower,upper,div,rem,sq;
    printf("\nEnter the lower limit of the range:");
    scanf("%d",&lower);
    printf("\nEnter the upper limit of the range:");
    scanf("%d",&upper);
    if(lower==1)
    {
        lower++;
    }
    do
    {
        sq=sqrt(lower);
        div=2;
        do
        {
            rem=lower%div;
            if(rem==0)
            {
                lower++;
                break;
            }
            else
            {
                div++;
            }
        }while(div<=sq);

        if(rem!=0)
        {
            printf("\t%d",lower);
            lower++;
        }
    }while(lower<=upper);
}
