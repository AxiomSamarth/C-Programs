#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[10][10],m,n,i,j;
    input:printf("\n\nEnter the size of the row:");
    scanf("%d",&m);
    printf("\nEnter the size of the column:");
    scanf("%d",&n);
    if(m<=0||n<=0)
    {
        printf("\nThe order of the matrix is invalid..!!");
        goto input;
    }
    printf("\nEnter %d X %d elements into the matrix",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe elements in snake pattern is\n");
    for(i=0;i<m;i++)
    {
        if(i%2!=0)
        {
            for(j=n-1;j>=0;j--)
            {
                printf("\t%d",a[i][j]);
            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                printf("\t%d",a[i][j]);
            }
        }
    }
}
