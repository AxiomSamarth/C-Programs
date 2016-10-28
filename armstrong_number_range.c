#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int lower,upper,rem,sum,dummy,flag=0;
    printf("\nEnter the lower limit of the range:");
    scanf("%d",&lower);
    printf("\nEnter the upper limit of the range:");
    scanf("%d",&upper);
    printf("\n");
    if(lower>upper)
    {
        printf("\nPlease do enter the proper range..!!\n\n");
        exit(0);
    }
    dummy=lower;
    for(dummy;dummy<=upper;dummy++)
    {
        lower=dummy;
        sum=0;
        do
        {
            rem=lower%10;
            sum+=pow(rem,3);
            lower/=10;
        }while(lower!=0);
        if(sum==dummy)
        {
            printf("%d\t",sum);
            flag=1;
        }
        else
        {
            continue;
        }
    }
    printf("\n");
    if(flag==0)
    {
        printf("\nThere are no armstrong numbers in the given range..!\n\n");
        exit(0);
    }
}
