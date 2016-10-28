#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isprime(long int a)
{
    int sq,div;
    sq=sqrt(a);
    for(div=2;div<=sq;div++)
    {
        if(a%div==0)
        {
            return 0;
        }
    }
    if(a%div!=0)
    {
        return 1;
    }
}
main()
{
     long int prime,i,sqr,ret,sqr_ret;
     long int n;
    for(n=3;n<=100;n++)
    {
        ret=isprime(n);

        if(ret==0&&n%2!=0)
        {
            printf("\n%d\n",n);
            for(i=1;i<=100;i++)
            {
                sqr=n-2*i*i;
                if(sqr>0)
                {
                    sqr_ret=isprime(sqr);
                    if(sqr_ret==1&&n==sqr+2*i*i)
                    {
                        printf("\n%d + 2* %d * %d = %d\n",sqr,i,i,n);
                    }
                }
            }
        }
    }
}
