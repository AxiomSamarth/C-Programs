#include<stdio.h>
#include<stdlib.h>
#include<math.h>
prime(int x)
{
    int rem,i,sq;
    sq=sqrt(x);
    for(i=2;i<=sq;i++)
    {
        rem=x%i;
        if(rem==0)
        {
            break;
        }
    }
    if(rem!=0)
    {
        printf("\t%d",x);
    }
    return 0;
}
main()
{
    int a,div,rem;
    printf("\nEnter the integer:");
    scanf("%d",&a);
    printf("\nThe prime factors of the given integer are ");
    for(div=2;div<=a;div++)
    {
        rem=a%div;
        if(rem==0)
        {
            prime(div);
        }
    }
    printf("\n");
}
