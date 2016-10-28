#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[100],b[100],i,m,n,uni[200],unio[200],intr[100],inter[100],k=0,flag,j,l=0;
    printf("\nEnter the size of the array a:");
    scanf("%d",&m);
    printf("\nEnter the size of the array b:");
    scanf("%d",&n);
    printf("\nEnter %d elements into the array a:",m);
    for(i=0;i<m;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter %d elements into the array b:",n);
    for(i=0;i<n;i++)
    {
        printf("\nb[%d]=",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<m+n;i++)
    {
        if(i<m)
        {
            uni[i]=a[i];
        }
        else
        {
            uni[i]=b[i-m];
        }
    }
    for(i=0;i<m+n;i++)
    {
        flag=0;
        for(j=i+1;j<m+n;j++)
        {
            if(uni[i]==uni[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            unio[k++]=uni[i];
        }
    }
    printf("\nThe union of the given two arrays is\n");
    for(i=0;i<k;i++)
    {
        printf("%d\t",unio[i]);
    }
    k=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                inter[k++]=a[i];
            }
        }
    }
    flag=0;

    for(i=0;i<k;i++)
    {
        flag=0;
        for(j=i+1;j<k;j++)
        {
            if(inter[i]==inter[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            intr[l++]=inter[i];
        }
    }
    if(l==0)
    {
        printf("\nThe given two arrays are disjoint..!!\n\n");
        exit(0);
    }
    printf("\nThe intersection of the given arrays is\n");
    for(i=0;i<l;i++)
    {
        printf("%d\t",intr[i]);
    }
}
