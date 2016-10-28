#include<stdio.h>
#include<stdlib.h>
main()
{
    int m,n,i,j,p,q,a[10][10],b[10][10],c[10][10],k;
    void read(int [][10],int ,int);
    void print(int [][10],int ,int);
    printf("\nEnter the row size of the matrix A:");
    scanf("%d",&m);
    printf("\nEnter the column size of the matrix A:");
    scanf("%d",&n);
    printf("\nEnter the row size of the matrix B:");
    scanf("%d",&p);
    printf("\nEnter the column size of the matrix B:");
    scanf("%d",&q);
    if(m<=0||n<=0||p<=0||q<=0||n!=p)
    {
        printf("\nInvalid input..!!");
        exit(0);
    }
    printf("\nEnter %d X %d elements into matrix A:",m,n);
    read(a,m,n);
    printf("\nEnter %d X %d elements into matrix B:",p,q);
    read(b,p,q);
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nThe matrix A is \n");
    print(a,m,n);
    printf("\nThe matrix B is \n");
    print(b,p,q);
    printf("\nThe product of the matrices A and B is\n");
    print(c,m,q);
}
void read(int x[][10],int y,int z)
{
    int i,j;
    for(i=0;i<y;i++)
    {
        for(j=0;j<z;j++)
        {
            printf("\nx[%d][%d]=",i,j);
            scanf("%d",&x[i][j]);
        }
    }
}
void print(int x[][10],int y,int z)
{
    int i,j;
    for(i=0;i<y;i++)
    {
        printf("\n");
        for(j=0;j<z;j++)
        {
            printf("\t%d",x[i][j]);
        }
    }
}
