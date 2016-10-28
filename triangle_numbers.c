#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
    long long int i,div,n,fac;
    for(i=0;i<=1000000000;i++)
    {
        div=2;
        n=i*(i+1)/2;
        for(fac=1;fac<=sqrt(n);fac++)
        {
            if(n%fac==0)
            {
                div+=2;
            }
        }
        if(div>=500)
        {
            printf("\n\n%lld",n);
        }
    }

}
