#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long int big=0,p,q;
void ispalindrome(long long int a,long long int i,long long int j)
{
    long long int rev=0,rem,b;
    b=a;
    do
    {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }while(a!=0);
    if(b==rev)
    {
        if(b>big)
        {
            big=b;
            p=i;
            q=j;
        }
    }
}
main()
{
    long long int a;int i,j;
    for(i=100;i<1000;i++)
    {
        for(j=100;j<1000;j++)
        {
            a=i*j;
            ispalindrome(a,i,j);
        }
    }
    printf("\n\nThe largest palindrome which is the product of two three digit number is %lld and is product of %lldand %lld\n\n",big,p,q);

}
