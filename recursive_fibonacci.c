#include<stdio.h>
#include<stdlib.h>
int i=1;
int fibonacci(int a,int b,int n)
{
    int c;
    if(i==1)
    {
        printf("\t%d",a);
        i++;
    }
    if(i==2)
    {
        printf("\t%d",b);
        i++;
    }

    if(i>2&&i<=n)
    {
        c=a+b;
        printf("\t%d",c);
        i++;
        a=b;
        b=c;
        fibonacci(a,b,n);
    }
    if(i>n)
    {
        exit(0);
    }
}
main()
{
    int a=0,b=1,c,n,result;
    printf("\nEnter the number of fibonacci terms required:");
    scanf("%d",&n);
    fibonacci(a,b,n);

}
