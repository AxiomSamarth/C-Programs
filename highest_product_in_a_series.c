#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[100],i,big=0,ref_index,n,p;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    if(n<4)
    {
        printf("\nPlease enter a minimum of four elements...!!");
        exit(0);
    }
    printf("\nEnter the %d elements into the array:",n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            printf("\nEnter non zero integers..!!\n\n");
            exit(0);

        }
    }
    for(i=0;i<n-3;i++)
    {
        p=a[i]*a[i+1]*a[i+2]*a[i+3];
        if(p>big)
        {
            big=p;
            ref_index=i;
        }
    }
    printf("\nThus the highest product is given by the adjacent four elements of the array is %d.\n\n",big);
    printf("\n\nThe array elements are %d, %d, %d and %d.\n\n",a[ref_index],a[ref_index+1],a[ref_index+2],a[ref_index+3]);
}
