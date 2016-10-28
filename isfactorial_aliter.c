#include<stdio.h>
main()
{
    int a;
    int isfactorial(int);
    printf("\nEnter the integer whose factoriality is to be found:");
    scanf("%d",&a);
    printf("\nThe result is %d\n",isfactorial(a));
}
int isfactorial(int a)
{
    int fact=1,i=1;
    do
    {
        fact*=i;
        i++;
    }while(fact<a);
    if(fact==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
