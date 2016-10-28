#include<stdio.h>
main()
{
    int n,result;
    int isfactorial(int);
    printf("\nEnter the integer whose factoriality is to be tested(1=yes and 0=no:");
    scanf("%d",&n);
    result=isfactorial(n);
    printf("\nThe result is %d\n",result);

}
int isfactorial(int n)
{
    int fact=1,flag=0;
    int m=1;
    do
    {
        fact*=m++;
        if(fact==n)
        {
            flag=1;
        }
    }while(n>=fact);

    if(flag==1)
    return 1;
    else
    return 0;
}
