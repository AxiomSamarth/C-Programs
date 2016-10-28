#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[10][10],m,n,i,j,sum;
    input:printf("\nEnter the size of the row:");
    scanf("%d",&m);
    printf("\nEnter the size of the column:");
    scanf("%d",&n);
    if(m<=0||n<=0)
    {
        printf("\nInvalid order of the matrix..!!");
        goto input;
    }
    printf("\nEnter %d X %d elelemts into the matrix \n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe sum of each row and column is\n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        sum=0;
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
            sum+=a[i][j];
        }
        printf("\t%d",sum);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        sum=0;

        for(j=0;j<m;j++)
        {
            sum+=a[j][i];
        }
        printf("\t%d",sum);
    }
}
