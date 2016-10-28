#include<stdio.h>
main()
{
    int pro,sum,i,j;
    printf("\nEnter the product of two numbers : ");
    scanf("%d",&pro);
    printf("\nEnter the sum of two numbers : ");
    scanf("%d",&sum);

    for(i=-abs(pro);i<=abs(pro);i++)
    {
        for(j=-abs(pro);j<=abs(pro);j++)
        {
            if(i*j==pro&&i+j==sum)
            {
                printf("\nThe numbers are %d and %d.\n",i,j);
                exit(0);
            }
        }
    }
    printf("\nNo number set satisfies given conditions..!!");
}
