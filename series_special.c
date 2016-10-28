#include<stdio.h>
main()
{
    int a,b,c,d,n,i;
    printf("\nHow many terms do you want:");
    scanf("%d",&n);
    a=0;
    b=1;
    c=1;
    printf("%d\t%d\t%d\t",a,b,c);
    for(i=4;i<=n;i++)
    {
        d=a+b+c;
        a=b;
        b=c;
        c=d;
        printf("%d\t",d);
    }
}
