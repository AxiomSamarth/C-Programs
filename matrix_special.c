#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int a[10][10],i,j,n,sq;
    printf("\nEnter the size of the matrix:");
    scanf("%d",&n);
    printf("\nEnter the elements of the matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        sq=sqrt(a[j][j]);
        i=0;
        do
        {
            a[i][j]/=sq;
            i++;
        }while(i<n);
    }

    /*or the following logic also can be used

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sq=sqrt(a[i][i]);
            a[j][i]/=sq;
        }
    }

    */
    printf("\nThe required matrix is\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
}
