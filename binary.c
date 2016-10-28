#include<stdio.h>
main()
{
    int n,rem,sum[100],count=0,i=0;
    printf("\nEnter the integer to be converted into binary:");
    scanf("%d",&n);
    do
    {

        rem=n%2;
        sum[i]=rem;
        i++;
        n/=2;

    }while(n>0);
    for(n=i-1;n>=0;n--)
    printf("%d",sum[n]);
}
