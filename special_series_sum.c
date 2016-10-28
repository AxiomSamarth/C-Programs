#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int i,j,sum=0,n,sum1=0;
    printf("\nEnter the integer n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("(");
        for(j=1;j<=i;j++)
        {
            if(j!=i)
            printf("%d+",j);
            else
            printf("%d",j);
            sum+=j;
        }
        if(i!=n)
        printf(")+");
        else
        {
            printf(")");
        }
        sum1+=sum;
        sum=0;
    }
    printf("\n\nThe sum of the given series is %d\n",sum1);
}
