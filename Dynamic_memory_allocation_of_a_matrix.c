#include<stdio.h>
#include<stdlib.h>
main()
{
    int **p,m,n;
    printf("\nEnter the row size : ");
    scanf("%d",&m);
    printf("\nEnter the column size : ");
    scanf("%d",&n);

    int i,j;

    p=(int **)malloc(sizeof(int)*m);
    for(i=0;i<m;i++)
    {
        *(p+i)=(int *)malloc(sizeof(int)*n);
    }
    printf("\nEnter the matrix elements : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",*(p+i)+j);
        }
    }
    printf("\nThe matrix is\n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("\t%d",*(*(p+i)+j));
        }
    }

}
