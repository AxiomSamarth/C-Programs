#include<stdio.h>
#include<stdlib.h>
main()
{
    long long int i,sum=0,div,sum1=0,sum2=0;
    for(i=2;i<10000;i++)
    {
        sum=0;
        sum1=0;

        for(div=1;div<i;div++)
        {
            if(i%div==0)
            {
                sum+=div;
            }
        }

        for(div=1;div<sum;div++)
        {
            if(sum%div==0)
            {
                sum1+=div;

            }
        }

        if(sum1==i&&sum!=sum1)
    {
        sum2+=sum1;
        printf("\nYes, the number %lld is amicable....!!",i);
    }

    }

    printf("\n\nSum of all amicable numbers is %lld\n",sum2);

}
