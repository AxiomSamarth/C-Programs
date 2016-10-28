#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[100],n,i,j,temp,*p,*q;
    p=a;
    q=&p;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",(p+i));
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    printf("\nThe array sorted in the ascending order is as below:\n\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",*(p+i));

    }
    printf("\n\n");

}
