#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[10][10],m,i,j;
    printf("\nEnter the row size of the square matrix:");
    scanf("%d",&m);
    printf("\nEnter %d X %d elements into the matrix:",m,m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe matrix is \n");
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
            if(i==j)
            {
                if(a[i][i]==1)
                {
                    continue;
                }
                else
                {
                    printf("\nThe inputted matrix is not a unit matrix..!!");
                    exit(0);
                }
            }
            else
            {
                if(a[i][j]==0)
                {
                    continue;
                }
                else
                {
                    printf("\nThe inputted matrix is not a unit matrix..!!\n\n");
                    exit(0);
                }
            }
        }
    }
    printf("\nThe inputted matrix is a unit matrix..!!\n\n");
}
