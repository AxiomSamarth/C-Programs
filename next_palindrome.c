#include<stdio.h>
#include<stdlib.h>
main()
{
    long long int n,a[1000],i,rev,j,dummy,rem,b;
    printf("\nEnter the test cases:");
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        printf("\n");
        printf("\nEnter number %d : ",i+1);
        scanf("%lld",&a[i]);
        printf("\nThe next smallest palindrome is ");
        if(a[i]>9)
        {

        for(j=(1+a[i]);j<=1000000;j++)
        {
            rev=0;
            b=j;
        do
        {
            rem=b%10;
            rev=rev*10+rem;
            b/=10;
        }while(b!=0);
        if(rev==j)
        {
            printf("%lld",j);
            break;
        }
        }


    }

}
printf("\n\n");
}

