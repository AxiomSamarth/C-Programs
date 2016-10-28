#include<stdio.h>
#include<stdlib.h>
int dummy;
void palindrome(int a,int rev)
{
   int rem;

     rem=a%10;
     rev=rev*10+rem;
     a/=10;
     if(a!=0)
     {
         palindrome(a,rev);
     }
     else
     {
         if(dummy==rev)
         {
             printf("\nThe entered integer is a palindrome..!!\n\n");
             exit(0);
         }
         else
         {
             printf("\n\nThe entered integer is not a palindrome..!!\n\n");
             exit(0);
         }
     }



}
main()
{
    int a,rev=0;
    printf("\nEnter the integer whose palindrome nature is to be tested:");
    scanf("%d",&a);
    dummy=a;
    palindrome(a,rev);
}
