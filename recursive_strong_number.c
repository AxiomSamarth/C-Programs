#include<stdio.h>
#include<stdlib.h>
int i,rem,sum=0,dummy;
void strong(int a)
{
    int fact=1;
    rem=a%10;

    for(i=1;i<=rem;i++)
    {
       fact*=i;
    }
    sum+=fact;

    a/=10;
    if(a!=0)
    {
        strong(a);
    }
    else
    {
        if(sum==dummy)
        {
            printf("\nYes, the entered integer %d is a strong number...\n",dummy);
            exit(0);
        }
        else
        {
            printf("\nNo, the entered integer %d is not a strong number..!!\n",dummy);
            exit(0);
        }
    }
}
main()
{
    int a;
    printf("\nEnter the integer whose strong number nature is to be checked:");
    scanf("%d",&a);
    dummy=a;
    strong(a);
}
