#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float fact(float i)
{
    int fact=1,m;
    for(m=1;m<=i;m++)
    {
        fact*=m;
    }
    return fact;
}
main()
{
     float sum=0,a,n,i;
    printf("\nEnter the number of terms required in the series :");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        printf("\t%.0f/%.0f",i,fact(i));
        if(i!=n)
        {
            printf("\t+");
        }
        sum+=(i)/fact(i);

    }
    printf("\n\nThe sum of the series upto %.0f terms is %f.\n\n",n,sum);
}
