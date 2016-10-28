#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int i=1;
void geo_series(int a, int r, int n)
{
    int term;
    if(i<=n)
    {
        term=a*pow(r,(i-1));
        printf("\t%d",term);
        i++;

        geo_series(a,r,n);
    }
    else
    {
        exit(0);
    }
}
main()
{
    int a,r,n;
    printf("\nEnter the first term of the geometric series :");
    scanf("%d",&a);
    printf("\nEnter the common difference :");
    scanf("%d",&r);
    printf("\nEnter the number of terms required in the geometric series:");
    scanf("%d",&n);
    geo_series(a,r,n);
}
