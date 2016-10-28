#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,i,j,k,sum=0,a[20][20];
    printf("\nEnter the order of the magic square:");
    scanf("%d",&n);


        for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]=0;
        }
    }
    i=1;
    j=((n+1)/2);
    if(n%2!=0)
    {


    for(k=1;k<=(n*n);k++)
    {
        a[i][j]=k;
        i-=1;
        j+=1;
        if(i<1&&j<=n)
        {
            i=n;
        }
        if(j>n&&i<n&&i>0)
        {
            j=1;
        }

        if(i<1&&j>n||a[i][j]!=0)
        {
            j-=1;
            i+=2;
        }


    }

    }

    else
    {
        k=1;


        for(i=1;i<=n;i++)
        {
            a[i][i]=(i-1)*4+i;
        }
        for(i=1,j=n;i<=n&&j>=1;i++,j--)
        {
            a[i][j]=(i*4)-(i-1);
        }
        for(i=n;i>=1;i--)
        {
            for(j=n;j>=1;j--)
            {
                if(a[i][j]!=0)
                {
                    k++;
                }
                else
                {
                    a[i][j]=k++;
                }
            }
        }
    }
     printf("\n\nThe magic square is \n\n");
    for(i=1;i<=n;i++)
    {
        printf("\n\n");
        for(j=1;j<=n;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    for(i=1,j=1;i<=n&&j<=n;i++)
    {
        sum+=a[i][j];
    }

    printf("\n\n\nThe magic constant is %d\n\n",sum);

}
