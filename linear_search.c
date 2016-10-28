#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[100],n,i,key;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    printf("\nEnter %d elements in the array:",n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the search key:");
    scanf("%d",&key);
    printf("\nThe array is\n");
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("\n\nThe search is succesful and the search is found at the position %d of the array\n\n",i+1);
            exit(0);
        }
    }
    printf("\n\nThe search isn't successful..!!\n\n");

}
