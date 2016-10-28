#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[100],mid,high,low,n,key,i,j,temp;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    printf("\nEnter %d elements into the array:",n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the search key:");
    scanf("%d",&key);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nThe sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    low=0;
    high=n-1;
    for(mid=(low+high)/2;low<=high;mid=(low+high)/2)
    {

        if(a[mid]==key)
        {
            printf("\nSearch successful and the key %d got found at %d position\n\n",key,mid+1);
            exit(0);
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("\nThe search is not successful..!!\n\n");
}
