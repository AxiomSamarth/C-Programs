#include<stdio.h>
#include<stdlib.h>
main()
{
    int factorial(int);
    int a;
    printf("\nEnter the integer whose factorial is to be found:");
    scanf("%d",&a);
    printf("\nThe value is %d.\n",factorial(a));
}
int factorial(int a)
{

    if(a>0)
    {
        printf("%d",a);
        return a*=factorial(a-1);
    }
    else
    {
        return 1;
    }

}

