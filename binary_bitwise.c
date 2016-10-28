#include<stdio.h>
main()
{
    int i,n=10,j=0,m;
    for(i=0;i<5;i++)
    {
        m = n << i+27;
        if(m<0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}
