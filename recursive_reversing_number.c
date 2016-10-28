#include<stdio.h>
#include<stdlib.h>
int reverse(int);
main()
{
    int a;
    printf("\nEnter the number to be reversed : ");
    scanf("%d",&a);
    int result=reverse(a);
    printf("\nThe reversed number is %d.\n",result);
}
int reverse(int a)
{
    static int rev=0;
    int rem;
    if(a!=0)
    {
        rem=a%10;
        rev=(rev*10)+rem;
        return reverse(a/10);
    }
    else
    {
        return rev;
    }
}
