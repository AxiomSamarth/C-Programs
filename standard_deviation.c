#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
    int a[100],n,i;
    float d[100],d1[100],mean,variance,sd,sum=0;
    printf("\nEnter the number of inputs:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    mean=sum/n;
    sum=0;
    for(i=0;i<n;i++)
    {
        d[i]=a[i]-mean;
        d1[i]=pow(d[i],2);
        sum+=d1[i];
    }
    variance =sum/n;
    sd=sqrt(variance);
    printf("\nThe mean of the inputted data is %.2f\n",mean);
    printf("\nThe variance of the inputted data is %.2f\n",variance);
    printf("\nThe standard deviation of the inputted data is %.2f\n\n",sd);
}
