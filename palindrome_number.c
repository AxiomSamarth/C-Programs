#include<stdio.h>
main()
{
    int a,rev=0,rem,dummy;
    printf("\nEnter the number:");
    scanf("%d",&a);
    dummy=a;
    do
    {
        rem=a%10;
        rev=(rev*10)+rem;
        a/=10;
    }while(a!=0);
    if(rev==dummy)
    {
        printf("\nThe number %d is a palindrome..!!\n\n",dummy);
    }
    else
    printf("\nThe number %d is not a palindrome..!!\n\n",dummy);
}
