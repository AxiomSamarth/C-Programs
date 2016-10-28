#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[100],i,n,key,choice,n1,temp,j;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    printf("\nEnter %d elements into the array:",n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
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
    printf("\n\nNow what would you like to do ? \n1. Insert single element multiple times.\n2.Insert multiple elements single time.");
    printf("\nEnter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\nEnter the insertion key in the array:");
                scanf("%d",&key);
                printf("\nHow many %d's would you liketo insert ?",key);
                scanf("%d",&n1);
                for(i=n;i<n+n1;i++)
                {
                    a[i]=key;
                }
                for(i=0;i<n+n1-1;i++)
                {
                    for(j=i+1;j<n+n1;j++)
                    {
                        if(a[i]>a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                }
                break;
        case 2:printf("\nHow many elements would you like to insert..?");
                scanf("%d",&n1);
                printf("\nEnter %d elements to be inserted..",n1);
                for(i=n;i<n+n1;i++)
                {
                    printf("\n%d=",i-n+1);
                    scanf("%d",&a[i]);
                }
                for(i=0;i<n+n1-1;i++)
                {
                    for(j=i+1;j<n1+n;j++)
                    {
                        if(a[i]>a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                }
                break;
        default:printf("\nInvalid choice number..!!\n");
    }
    printf("\nThe new array of your requirement is\n");
    for(i=0;i<n+n1;i++)
    {
        printf("\t%d",a[i]);
    }
}
