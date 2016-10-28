#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int rem,sum=0,dummy;
void arm(int a)
{
    rem=a%10;
    sum+=rem*rem*rem;
    a/=10;
    if(a!=0)
    {
        arm(a);
    }
    else
    {
        if(sum==dummy)
        {
            printf("\nYes, the entered integer %d is an ARMSTRONG NUMBER..!!\n",dummy);
            exit(0);
        }
        else
        {
            printf("\nNo, the entered integer %d isn't an ARMSTRONG NUMBER..!!\n",dummy);
            exit(0);
        }
    }
}
int main()
{
    int a;
    printf("\nEnter the number whose armstrong nature has to be checked :");
    scanf("%d",&a);
    dummy=a;
    arm(a);
}
