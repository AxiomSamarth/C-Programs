#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int div,sq,rem,count=0;
    long int i;
    for(i=2;i<=1000000;i++)
    {
        sq=sqrt(i);
        for(div=2;div<=sq;div++)
        {
            rem=i%div;
            if(rem==0)
            {
                break;
            }
        }
        if(rem!=0)
        {
            count++;
            if(count==10001)
            {
                printf("\n\nThe 100001st prime number is %d\n\n.",i);
                exit(0);
            }
        }
    }
}
