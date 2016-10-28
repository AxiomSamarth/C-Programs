#include<stdio.h>
#include<stdlib.h>
struct sparse
{
    int row,col,value;
}s[10];
main()
{
    int m,n,i,j,z=0,a[10][10];
    printf("\nEnter the order of the matrix : ");
    scanf("%d%d",&m,&n);
    printf("\nEnter the elements into the matrix :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
            {
                z++;
            }
        }
    }
    int r=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                s[r].row=i;
                s[r].col=j;
                s[r++].value=a[i][j];
            }
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
    printf("\nThe sparse matrix in table form is : \n");
    printf("\n\t\tROW\tCOLUMN\tVALUE\n");
    for(i=0;i<r;i++)
    {
        printf("\ntable[%d]\t%d\t%d\t%d",i,s[i].row,s[i].col,s[i].value);
    }

}
