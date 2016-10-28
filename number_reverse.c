#include<stdio.h>
main()
{
    int dummy,n,rev=0,rem,count=0,i;
    printf("\nEnter the integer:");
    scanf("%d",&n);

    dummy=n;


    for(n;n!=0;n/=10)
    {

        rem=n%10;
        if(rem==0)
        {
            count++;
        }
        else
        {
            break;
        }

    }
    n=dummy;
    for(n;n!=0;n/=10)
    {

        rem=n%10;

        rev=(rev*10)+rem;

    }
    printf("\nThe reversed integer is ");
    for(i=0;i<count;i++)
    printf("0");

    printf("%d",rev);

}
