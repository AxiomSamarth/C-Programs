#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int a,dummy,rem,sum=0;
    printf("\nEnter the integer whose armstrong nature is to be verified:");
    scanf("%d",&a);
    dummy=a;
    do
    {
        rem=a%10;
        sum+=pow(rem,3);
        a/=10;
    }while(a!=0);
    if(sum==dummy)
    {
        printf("\nYes, it is an armstrong number..!!\n\n");
    }
    else
    {
        printf("\nNo sorry, it is not an armstrong number..!!\n\n");
    }
}
