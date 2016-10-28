#include<stdio.h>
#include<stdlib.h>
main()
{
    int sum=0,a,rem;
    printf("\nEnter the integer:");
    scanf("%d",&a);
    do
    {
        rem=a%10;
        sum+=rem;
        a/=10;
        if(sum>9&&a==0)
        {
            a=sum;
            sum=0;
        }
    }while(a!=0);
    printf("\nThe sum of the digits of the number is %d\n\n",sum);
}
