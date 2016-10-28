#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,d,n,i,sum=0,term=0;
    printf("\nEnter the number of terms:");
    scanf("%d",&n);
    printf("\nEnter the first term:");
    scanf("%d",&a);
    printf("\nEnter the common difference:");
    scanf("%d",&d);

    for(i=1;i<=n;i++)
    {
        term=a+(i-1)*d;
        printf("\t%d",term);
        sum+=term;
    }
    printf("\n\nThe sum of the given arithmetic progression upto %d terms is %d\n\n",n,sum);

}
