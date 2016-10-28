#include<stdio.h>
main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        printf("\n");
        for(j=0;j<5-i-1;j++)
        {
            printf(" ");        /*It's a space inside printf*/
        }
        for(k=0;k<=i;k++)
        {
            printf(" *");       /*It's a space and * inside the printf*/
        }

    }
}
