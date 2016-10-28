#include<stdio.h>
main()
{
    int a=0,b=1,i,c=0,sum=0;
    for(i=1;c<4000000;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
        if(c%2==0)
        {
            sum+=c;
        }
    }
    printf("\nsum=%d\n",sum);
}
