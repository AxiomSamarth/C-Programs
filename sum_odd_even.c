#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,sume=0,sumo=0,i;
    printf("\nEnter the upper limit of the natural number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sume+=i;
        }
        else
        {
            sumo+=i;
        }
    }
    printf("\nThe sum of all even natural numbers upto %d is %d\n\n",n,sume);
    printf("\nThe sum of all odd natural numbers upto %d is %d\n\n",n,sumo);
}
