#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int lower,upper,n,i,coeff[100];
    float sum=0;
    printf("\nEnter the order of the polynomial:");
    scanf("%d",&n);
    printf("\nEnter the lower limit of integration:");
    scanf("%d",&lower);
    printf("\nENter the upper limit of integration:");
    scanf("%d",&upper);
    printf("\nNow enter the co-effiecients of each term\n");
    for(i=0;i<=n;i++)
    {
        printf("\nCo-efficient of x^%d is : ",i);
        scanf("%d",&coeff[i]);
    }
    for(i=0;i<=n;i++)
    {
        sum+=coeff[i]*((pow(upper,i+1)/(i+1.0))-(pow(lower,i+1)/(i+1.0)));
    }
    printf("\nThe value of interation is %.3f\n\n",sum);
}
