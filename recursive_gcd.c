#include<stdio.h>
#include<stdlib.h>
int gcd(int,int);
main()
{
    int a,b;
    printf("\nEnter the two integers : ");
    scanf("%d%d",&a,&b);
    int result=gcd(a,b);
    printf("\nThe GCD of %d and %d is %d\n",a,b,result);
}
int gcd(int num,int den)
{
    if(num%den==0)
    {
        return den;
    }
    else
    {
        return gcd(den,num%den);
    }
}
