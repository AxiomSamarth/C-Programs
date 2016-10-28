#include<stdio.h>
#include<math.h>
main()
{
    void input(int [],int);
    int a[100],n;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    input(a,n);
}
void input(int a[100],int n)
{
    int i;
    float std_dev(int [],int);
    printf("\nEnter %d elements into the array:",n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    std_dev(a,n);
}
float std_dev(int a[100],int n)
{
    float sd;
    float variance(int [],int);
    sd=sqrt(variance(a,n));
    printf("\nThe standard deviation is %f\n",sd);
}
float variance(int a[100],int n)
{
    int i;
    float mean(int[],int);
    float m,result=0;
    m=mean(a,n)   ;
    for(i=0;i<n;i++)
    {
        result+=pow(a[i]-m,2);
    }
    printf("\nThe variance is %f\n",result);
    return result;
}
float mean(int a[100],int n)
{
    int sum=0,i;
    float m;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    m=sum/n;
    printf("\nThe mean is %f\n",m);
    return m;
}
