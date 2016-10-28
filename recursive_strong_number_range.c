#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int lower,upper,fact,rem,i,dummy,sum=0;
void strong()
{
    if(lower<=upper)
    {
        dummy=lower;
        do{
        rem=dummy%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact*=i;
        }
        sum+=fact;
        dummy/=10;
        }while(dummy!=0);
        if(sum==lower)
        {
            printf("\n%d",sum);
            sum=0;
            lower++;
            strong();
        }
        else
        {
            sum=0;
            lower++;
            strong();
        }
    }
    else
    {
        printf("\n\n");
        exit(0);
    }
}
int main()
{
    printf("\nEnter the lower limit of the range:");
    scanf("%d",&lower);
    printf("\nEnter the upper limit of the range:");
    scanf("%d",&upper);
    strong();
}
