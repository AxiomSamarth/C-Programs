#include<stdio.h>
#include<stdlib.h>
int largest(int [],int n);
int large;
main()
{
    int a[10],n,res;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    int i;
    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    large=a[0];
    res=largest(a,n-1);
    printf("\nThe largest of the array elements is %d\n",res);
}
int largest(int a[],int n)
{
    if(n>=0)
    {
        if(large<a[n])
        {
            large=a[n];
        }
       largest(a,n-1);
    }
    else
    {
        return large;
    }
}





