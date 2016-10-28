#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[10][10],m,i,j;
    printf("\nEnter the size of the row of the square matrix:");
    scanf("%d",&m);
    if(m<=0)
    {
        printf("\nThe order of the matrix is invalid folk..!!");
        exit(0);
    }
    printf("\nEnter %d X %d elements int the matrix A:",m,m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe matrix A is \n");
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
        for(j=0;j<m;j++)
        {
            if(a[i][j]==-a[j][i]&&a[i][i]==0)
            {
                continue;
            }
            else
            {
                printf("\n\nThis is not a skew symmetric matrix..!!\n\n");
                exit(0);
            }
        }
    }
    printf("\n\nThis is a skew symmetric matrix..!!\n\n");
}
