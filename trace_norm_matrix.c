#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int a[10][10],m,i,j,trace=0;
    float norm=0;
    printf("\nEnter the row size of the matrix:");
    scanf("%d",&m);
    if(m<=0)
    {
        printf("\nInvalid order of the matrix folk..!!\n\n");
        exit(0);
    }
    printf("\nNow enter %d X %d elements into the matrix:",m,m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            if(i==j)
            {
               trace+=a[i][i] ;
            }
            norm+=pow(a[i][j],2);
        }
    }
    norm=sqrt(norm);
    printf("\nThe matrix is\n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    printf("\nThe trace of the matrix is %d\n",trace);
    printf("\nThe norm of the matrix is %f\n\n",norm);
}
