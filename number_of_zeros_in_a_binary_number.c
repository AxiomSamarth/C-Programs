#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,i,count=0,b;

    printf("\nEnter the integer:");
    scanf("%d",&a);

    for(i=0;i<32;i++)
    {
        b=a>>i;
        printf("\n%d",b);
        if(b%2==0)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    printf("\nThe number of zeros in the 32 bit binary form of %d is %d.",a,count);
}
