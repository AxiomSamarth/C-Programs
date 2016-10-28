#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,div,count_div=0,count_num=0;
    printf("\nThe program will print all the numbers and the number of numbers below 100 that have exactly eight divisors.\n\n");

    for(n=1;n<=100;n++)
    {
        count_div=0;

        for(div=1;div<=n;div++)
        {
            if(n%div==0)
            {
                count_div++;
            }

        }
        if(count_div==8)
        {
            printf("\t%d",n);
            count_num++;
        }
    }

    printf("\n\n\nTherefore there are totally %d numbers below 100 that are having exactly eight divisors.\n\n",count_num);
}
