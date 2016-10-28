#include<stdio.h>
#include<stdlib.h>
int low=0,high;
void search(int a[],int n,int key)
{
    int mid;
    if(low>high)
    {
        printf("\nKey not found..!!\n\n");
        exit(0);
    }
    mid=(low+high)/2;
    if(a[mid]==key)
    {
        printf("\nSearch successful, key found..!!");
        exit(0);
    }

    else if(a[mid]>key)
    {
            high=mid-1;
            search(a,n,key);
    }
    else
    {
            low=mid+1;
            search(a,n,key);
    }


    }


void sort(int a[],int n)
{
    int i,j,temp,key,mid;
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
    printf("\n\nEnter the search key :");
    scanf("%d",&key);
    search(a,n,key);

}
void read(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    sort(a,n);
}
main()
{
    int a[100],n;
    printf("\nEnter the number of inputs :");
    scanf("%d",&n);
    high=n;
    printf("\n\nEnter %d values in the array :",n);
    read(a,n);
}
