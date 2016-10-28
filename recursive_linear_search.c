#include<stdio.h>
#include<stdlib.h>
int j=0;
void linear(int a[],int n,int key)
{
    if(j>n)
    {
        printf("\nThe key was not found in the array..!!\n");
        exit(0);
    }
    if(a[j]!=key)
    {
        j++;
        linear(a,n,key);
    }
    else
    {
        printf("\n\nThe search is successful, key found..!!\n");
        exit(0);
    }
}
void read(int a[],int n)
{
    int i,key;
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the search key:");
    scanf("%d",&key);
    linear(a,n,key);
}
main()
{
    int a[10],n;
    printf("\nEnter the number of details you will give:");
    scanf("%d",&n);
    printf("\n\nEnter %d elements in the array :",n);
    read(a,n);
}
