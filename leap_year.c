#include<stdio.h>
#include<stdlib.h>
main()
{
    int year;
    printf("\nEnter the year:");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("\nThe year %d is a leap year\n\n",year);
            exit(0);
        }
        else
        {
            printf("\nThe year %d isn't a leap year\n\n",year);
            exit(0);
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("\nThe year %d is a leap year\n\n",year);
        }
        else
        {
            printf("\nThe year %d is not a leap year\n\n",year);
        }
    }
}
