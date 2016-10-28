#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,fact=1,sum=0,rem,dummy,m;
    printf("\nEnter the integer whose strong number nature is to be verified:");
    scanf("%d",&a);
    dummy=a;
    do
    {
        rem=a%10;
        for(m=1;m<=rem;m++)
        {
            fact*=m;
        }
        sum+=fact;
        fact=1;
        a/=10;
    }while(a>0);
    if(sum==dummy)
    {
        printf("\nThe integer %d is a strong number.\n\n",sum);
    }
    else
    {
        printf("\nThe integer %d isn't a strong number.\n\n",dummy);
    }
}
