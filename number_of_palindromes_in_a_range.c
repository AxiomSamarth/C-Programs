#include<stdio.h>
#include<stdlib.h>
main()
{
    int count=0,low,high,dummy,rev=0,rem,i;
    printf("\nEnter the lower limit of the range:");
    scanf("%d",&low);
    printf("\nEnter the upper limit of the range:");
    scanf("%d",&high);
    for(i=low;i<=high;i++)
    {
        dummy=i;
        rev=0;
        do
        {
            rem=dummy%10;
            rev=rev*10+rem;
            dummy/=10;
        }while(dummy!=0);
        if(rev==i)
        {
            count++;
        }
    }
    printf("\nIn the entered range there are %d palindromes...!!",count);
}
