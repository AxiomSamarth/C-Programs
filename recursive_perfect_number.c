#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int sum=0,divi=1,rem;
void perfect(int a)
{
    if(a%divi==0)
    {
        sum+=divi;
    }
    if(divi<=(a/2))
    {
        divi++;
        perfect(a);
    }
    if(divi>(a/2))
    {
        if(sum==a)
        {
            printf("\nYes, the integer is a perfect number..!!\n");
            exit(0);
        }
        else
        {
            printf("\nNo,the integer is not a perfect number..!!\n");
            exit(0);
        }
    }
}
main()
{
    int a;
    printf("\nEnter the number whose perfection is to be checked:");
    scanf("%d",&a);
    perfect(a);
}
