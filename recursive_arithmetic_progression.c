#include<stdio.h>
#include<stdlib.h>
int i=1;
main()
{
    int a,d,n;
    void AP(int,int ,int);
    printf("\nEnter the first term :");
    scanf("%d",&a);
    printf("\nEnter the common difference:");
    scanf("%d",&d);
    printf("\nEnter the number of terms required in the series:");
    scanf("%d",&n);
    AP(n,a,d);
}
void AP(int n,int a, int d)
{
    int term;
    if(i<=n)
    {
        term=a+(i-1)*d;
        i++;
        printf("\t%d",term);
        AP(n,a,d);
    }
    else
    {
        exit(0);
    }
}
