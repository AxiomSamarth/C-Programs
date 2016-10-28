#include<stdio.h>
#include<stdlib.h>
main()
{
    int m,n,i,j,a[10][10],b[10][10],c[10][10];
    void print(int [][10],int ,int);
    printf("\nEnter the row size of both the matrices:");
    scanf("%d",&m);
    printf("\nEnter the column size of both the matrices:");
    scanf("%d",&n);
    if(m<=0||n<=0)
    {
        printf("\nInvalid order of the matrix..!!");
        exit(0);
    }
    printf("\nEnter %d X %d elements into the matrix A:",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\nEnter %d X %d elements into the matrix B:",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nb[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nThe matrix A is\n");
    print(a,m,n);
    printf("\n\nThe matrix B is\n");
    print(b,m,n);
    printf("\n\nThe sum of matrix A and matrix B is matrix C which is\n");
    print(c,m,n);
    printf("\n\n");

}
void print(int x[][10],int y,int z)
{
    int i,j;
    printf("\n");
    for(i=0;i<y;i++)
    {
        printf("\n");
        for(j=0;j<z;j++)
        {
            printf("\t%d",x[i][j]);
        }
    }
}
