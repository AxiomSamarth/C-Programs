#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int sum1=0,sum2=0,i;
    for(i=1;i<=100;i++)
    {
        sum1+=i*i;
    }
    for(i=1;i<=100;i++)
    {
        sum2+=i;
    }
    sum2*=sum2;
    printf("\n\n%d",sum1-sum2);
}
