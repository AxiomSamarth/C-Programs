#include<stdio.h>
#include<stdlib.h>
main()
{
    long long int lower,upper,i,sum,dummy,fact,rem,m;
    printf("\nEnter the lower limit of the range:");
    scanf("%lld",&lower);
    printf("\nEnter the upper limit of the range:");
    scanf("%lld",&upper);
    dummy=lower;
    printf("\n\nThe strong numbers of the range are\n");

    for(dummy=lower;dummy<=upper;dummy++)
    {
        sum=0;
        i=dummy;
        lower=i;
        for(i=dummy;i>0;i/=10)
        {
            fact=1;
            for(m=1;m<=i%10;m++)
            {
                fact*=m;
            }
            sum+=fact;
        }
        if(sum==lower)
        {
            printf("\n%lld",lower);
        }
    }
    printf("\n\n");
}
