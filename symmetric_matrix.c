#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[10][10],m,i,j;
    printf("\nEnter the row size of the square matrix:");
    scanf("%d",&m);
    if(m<=0)
    {
        printf("\nThe order of the matrix is invalid..!!");
        exit(0);
    }
    printf("\nEnter %d X %d elements into the matrix A:",m,m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe matrix A is\n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i][j]==a[j][i])
            {
                continue;
            }
            else
            {
                printf("\nThe inputted square matrix is not a symmetric matrix..!!\n\n");
                exit(0);
            }
        }
    }
     printf("\nThe inputted square matrix is a symmetric matrix..!!\n\n");
}
