#include<stdio.h>
#include<stdlib.h>
main()
{

    /*These are the declarations*/
    int i,j,*a,n,min,temp;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    /*Allocate the memory dynamically*/
    a = (int *)malloc(sizeof(int)*n);

    /*Take the input of the unsorted array*/
    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
    {
        printf("\na[%d] : ",i);
        scanf("%d",&a[i]);
    }

    /*Now write the logic for the sorting the array*/

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                temp = a[min];
                a[min] = a[j];
                a[j] = temp;
            }
        }
    }

    /*Print the sorted array*/

    printf("\nThe sorted array is : ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }


}
