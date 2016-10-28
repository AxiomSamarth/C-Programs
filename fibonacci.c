#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,b,c,n,i;
    printf("\nEnter the number of fibonacci integers you want to display:");
    scanf("%d",&n);
    if(n<2)
    {
        printf("\nGive the number of terms atleast 3..!!");
        exit(0);
    }
    a=0;
    b=1;
    printf("%d\t%d",a,b);
    for(i=3;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\t%d",c);

    }
}
