#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    unsigned long long int i,sq,divi,rem,f;unsigned long long int a;
    printf("\nEnter the integer whose largest prime factor is to be found out:");
    scanf("%lld",&a);
    printf("\n\n");

    for(i=1;i<=a;i++)
    {
        sq=sqrt(i);
        for(divi=2;divi<=sq;divi++)
        {
            rem=i%divi;
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

            if(a%i==0)
            {
                f=i;
                printf("\n\n%lld",i);
            }


        }
    }
    printf("\n\nThe largest prime factor of a is %lld\n",f);
}
