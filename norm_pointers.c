#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    float norm(int *,int,int);
    int a[10][10],n,m,i,j,*p,trace=0;
    float norm1;
    p=a;
    printf("\nEnter the size of the row:");
    scanf("%d",&m);
    printf("\nEnter the size of the column:");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",(p+i+j));
        }
    }
    printf("\nThe matrix is\n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("\t%d",(*(p+i)+j));
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            trace+=(*(p+i)+j);
        }
    }
    printf("\nThe trace of the matrix is %d.",trace);
    norm1=norm(p,m,n);

    printf("\n\nThe norm of the matrix is %f\n\n",norm1);

}
float norm (int *x, int y, int z)
{
    int i,j,sum=0;
    float norm2;
     for(i=0;i<y;i++)
    {
        for(j=0;j<z;j++)
        {
            sum+=pow((*(x+i)+j),2);
        }
    }
    norm2=sqrt(sum);
    return norm2;
}
