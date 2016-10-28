#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[100],n,i,j,temp,p,key,count=0,flag=0,del_num;
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
    printf("\nEnter the deletion key:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            p=i;
            flag=1;
            count++;
        }
        else
        {
            continue;
        }

    }
    if(flag==0)
    {
        printf("\nKey not found in the entire array.");
        exit(0);
    }
    if(count>1)
    {
        printf("\nThe key %d has occured %d times, how many would you like to delete ?",key,count);
        scanf("%d",&del_num);
        if(del_num>count)
        {
            printf("\nHow can we delete more the times than existing..??");
            exit(0);
        }
        for(i=0;i<n;i++)
        {
            if(i<p-del_num+1||i>p)
            printf("\t%d",a[i]);
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]!=key)
            printf("%d\t",a[i]);
        }
    }
}
