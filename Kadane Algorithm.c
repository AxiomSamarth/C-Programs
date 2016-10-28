#include<stdio.h>
#include<stdlib.h>
main()
{
    int *a,n,*b,k=0,i,sum=0,max=0;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    a = (int *)malloc(sizeof(int)*n);
    b = (int *)malloc(sizeof(int)*n);

    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
    {
        printf("\na[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("\nThe array is\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum += a[i];

        if(sum > max && sum > 0)
        {
            max = sum;
        }
        else if(sum < 0)
        {
            sum = 0;
        }
    }
    printf("\nThe maximum value of the contiguous sub array is %d\n",max);
}
