#include<stdio.h>
main()
{
    int n=0,i;
    for(i=1;i<1000;i++)
    {
        if(i%3==0||i%5==0)
        {
            n+=i;
        }
    }
    printf("\n%d",n);
}
