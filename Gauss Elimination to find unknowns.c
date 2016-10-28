#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void read(float **a,int n)
{
    printf("\nBeacuse you wish to find %d variables, you must supply with %d equations\n",n,n);

    int i,j;

    for(i=0;i<n;i++)
    {
        printf("\nEnter the co-efficients of the %d unknowns in equation %d followed by it's value : ",n,i+1);

        for(j=0;j<n+1;j++)
        {
            scanf("%f",(*(a+i)+j));
        }
    }
}

void display(float **a,int n)
{
    printf("\nThe matrix is \n");

    int i,j;

    for(i=0;i<n;i++)
    {
        printf("\n");

        for(j=0;j<n+1;j++)
        {
            printf("\t%.2f",a[i][j]);
        }
    }
}

int gcd(int a,int b)
{
    int rem;
    do
    {
        rem = a%b;
        if(rem == 0)
        {
            printf("\n\n%d\n\n",b);
            return b;
        }
        else
        {
            a=b;
            b=rem;
        }
    }while(rem!=0);
}

void compute(float **a,int n)
{
    int i,j,k,den;
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=i;k<n;k++)
            {
                a[j][k] = a[j][k] - a[i][k]*a[j][i]/a[i][i];
            }

        }

    }
}

main()
{
    float **a;
    int n,i;

    printf("\nEnter the number of unknowns you wish to find : ");
    scanf("%d",&n);

     a = (float **)malloc(sizeof(float *)*(n));

    for(i=0;i<n;i++)
    {
        *(a+i) = (float *)malloc(sizeof(float)*(n+1));
    }

    read(a,n);
    display(a,n);
    compute(a,n);
    display(a,n);
}
