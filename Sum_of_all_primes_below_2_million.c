#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
    long long int i,div,rem,sq,sum=0;
    for(i=2;i<2000000;i++)
    {
        sq=sqrt(i);
        for(div=2;div<=sq;div++)
        {
            rem=i%div;
            if(rem==0)
            {
                break;
            }
            else
            {
                continue;
            }
        }
        if(rem!=0)
        {
            sum+=i;
        }
    }
    printf("\n\nThe sum of all prime numbers below two million is %lld\n\n",sum);
}
