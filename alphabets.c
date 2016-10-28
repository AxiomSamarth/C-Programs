#include<stdio.h>
#include<stdlib.h>
#define pf printf(
main()
{
    int i,j;
    pf"\nThe capital english alphabets are\n\n");
    for(i=65;i<=90;i++)
    {
        if(i%5==0)
        {
            printf("\n\n");
        }
        {
               printf("\t%c",i);
        }

    }
}
