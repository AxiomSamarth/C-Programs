#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int a,r,n,i,sum=0,term;
    printf("\nEnter the number of terms:");
    scanf("%d",&n);
    printf("\nEnter the first term:");
    scanf("%d",&a);
    printf("\nEnter the common ratio:");
    scanf("%d",&r);
    term=a;
    for(i=0;i<n;i++)
    {
       sum+=term;
       printf("\t%d",term);
       term*=r;
    }
    printf("\nThe sum of the geometric series upto %d terms is %d\n\n",n,sum);


}
