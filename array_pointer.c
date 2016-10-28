#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int a[100],n,i,*p;
    p=a;
    printf("\nENter the size of the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        printf("\t%d",*(p+i));
    }
}
