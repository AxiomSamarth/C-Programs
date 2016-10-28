#include<stdio.h>
main()
{
    int a[100],i,n,sum=0;
    printf("\nEnter the values:");
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==-1)
        {
            break;
        }
    }
    printf("\n%d\n\n",i);
    for(n=0;n<i;n++)
    {
        printf("\n%d",a[n]);
    }
}
