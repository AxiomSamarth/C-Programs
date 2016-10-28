#include<stdio.h>
main()
{
    int a,b,num,den,rem;
    input:printf("\nEnter the integers:");
    scanf("%d%d",&a,&b);
    if(a*b==0)
    {
        printf("\nEnter non zero integers:");
        goto input;
    }
    if(a>b)
    {
        num=a;
        den=b;
    }
    else
    {
        num=b;
        den=a;
    }
    do
    {
        rem=num%den;
        if(rem==0)
        {
            break;
        }
        num=den;
        den=rem;
    }while(rem!=0);

    printf("\nThe GCD of %d and %d is %d",a,b,den);
    printf("\nThe LCM of %d and %d is %d",a,b,a*b/den);
}
