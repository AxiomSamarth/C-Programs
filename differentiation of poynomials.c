#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int x,n,i,coeff[100],sum=0;
    printf("\nEnter the order of polynomial:");
    scanf("%d",&n);
    printf("\nEnter the value at which the polynomial has to be differentiated : ");
    scanf("%d",&x);
    for(i=0;i<=n;i++)
    {
        printf("\nEnter coefficient of x^%d :",i);
        scanf("%d",&coeff[i]);
    }
    for(i=0;i<=n;i++)
    {
        sum+=i*coeff[i]*pow(x,i-1);
    }
    printf("\nThe differentiation of given polynomial at %d is %d.\n\n",x,sum);
}
