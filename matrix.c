#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[10][10],i,j,m,n;
    printf("\nEnter the row and column size of the matrix:");
    scanf("%d%d",&m,&n);
    if(m<=0||n<=0)
    {
        printf("\nInvalid order of the matrix..!!");
        exit(0);
    }
    printf("\nEnter %d X %d elements into the matrix:",m,n);
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
           printf("\na[%d][%d]=",i,j);
           scanf("%d",&a[i][j]);
       }
    }
    printf("\nThe matrix is\n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    printf("\n\n");
}
