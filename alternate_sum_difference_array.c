#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[100],i,n;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    printf("\nEnter %d elements into the array:",n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nThe array with alternate sum and difference of the elements is\n");
    for(i=0;i<n-1;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",a[i]+a[i+1]);
        }
        else
        {
            printf("%d\t",a[i]-a[i+1]);
        }
    }

}
