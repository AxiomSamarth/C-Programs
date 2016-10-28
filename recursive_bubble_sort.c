#include<stdio.h>
#include<stdlib.h>
int i,j;

void bubble(int a[],int n)
{
    int temp;

    if(j<n)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

            j++;
            bubble(a,n);
        }
        else
        {
            j++;
            bubble(a,n);
        }
    }
    else
    {
        if(i<n-1)
        {
           i++;
           j=i+1;
           bubble(a,n);
        }

        else
        {
            for(i=0;i<n;i++)
            {
                printf("\t%d",a[i]);
            }
            exit(0);
        }
    }
}
void read(int a[],int n)
{
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    i=0;
    j=i+1;

    bubble(a,n);

}



main()
{
    int a[10],n;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    printf("\nEnter %d elements into the array :",n);
    read(a,n);
}
