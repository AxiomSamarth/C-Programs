#include"stdio.h"
#include"stdlib.h"
main()
{
    int a[100],i,j,n,temp;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    printf("\nEnter %d elements in the array:",n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array is\n");
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
}
