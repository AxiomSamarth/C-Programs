#include<stdio.h>
#include<stdlib.h>
main()
{
    int lower,upper,rem,rev,count=0,i,cases,j;
    printf("\nEnter the number of cases:");
    scanf("%d",&cases);
    if(cases>=1&&cases<=10)
    {
        for(j=0;j<cases;j++)
        {
            count=0;
            printf("\nEnter the lower limit of the range:");
        scanf("%d",&lower);
        printf("\nEnter the upper limit of the range:");
        scanf("%d",&upper);
        if(lower>=0&&upper>=lower&&upper<=100000)
        {
                    printf("\nThe palindromes between %d and %d are as follows:\n",lower,upper);
    for(i=lower;i<=upper;i++)
    {

        lower=i;
        rev=0;
        do
        {
            rem=lower%10;
            rev=rev*10+rem;
            lower/=10;
        }while(lower!=0);
        if(rev==i)
        {
            printf("\n%d",rev);
            count++;
        }
    }
    printf("\nThere are %d palindromes within the given range.\n",count);

        }
        }

    }
    else
    {
        exit(0);
    }

}
