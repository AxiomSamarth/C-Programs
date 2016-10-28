#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
    unsigned long int sum=0,i,rem,sq,div;
    for(i=1;i<1000;i++)
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
    printf("\n\nThe sum of prime numbers upto one thousand is %d.\n\n",sum);
}
