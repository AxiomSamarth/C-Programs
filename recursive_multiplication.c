#include<stdio.h>
#include<stdlib.h>
int add(int,int);
main()
{
    int m,n;
    printf("\nEnter the multiplicand : ");
    scanf("%d",&m);
    printf("\nEnter the multiplier : ");
    scanf("%d",&n);
    int result=add(m,n);
    printf("\nThe product of %d and %d is %d\n",m,n,result);
}
int add(int m,int n)
{
    if(n>0)
    {
        return m+add(m,n-1);

    }
    else
    {
        return 0;
    }

}
