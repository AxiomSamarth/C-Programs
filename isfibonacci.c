#include<stdio.h>
#include<stdlib.h>
main()
{
    int isfibonacci(int);
    int key,result;
    printf("\nEnter the integer whose fibonnaci nature is to be determined:");
    scanf("%d",&key);
    result=isfibonacci(key);
    if(result==0)
    {
        printf("\nThe key %d is not a fibonnaci number..!!\n\n",key);
        exit(0);
    }
    else
    {
        printf("\nThe key %d is a fibonnaci number..!!\n\n",key);
        exit(0);
    }
}
int isfibonacci(int x)
{
    int c,a=0,b=1;

   do
    {
        c=a+b;
        a=b;
        b=c;
    }while(c<x);
    if(c==x||c==0)
    return 1;
    else
    return 0;
}
