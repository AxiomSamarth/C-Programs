#include<stdio.h>
#include<math.h>
main()
{
    int i=0,sign=1,m,fact=1,dummys,rem,flag=0;
    float sum=0,degree,radian,accuracy,diff=0,num,cos_org,dummy,decimal;
    printf("\nEnter the angle in degrees:");
    scanf("%f",&degree);
    dummy=degree;
    if(degree<0)
    {
        degree*=-1;
        flag=1;
    }
    dummys=degree;
    decimal=degree-dummys;
    if(degree>360)
    {
        rem=dummys%360;
        degree=rem+decimal;
    }
    if(degree>90&&degree<=180)
    {
        degree=180-degree;
        flag=1;
    }
    if(degree>180&&degree<=270)
    {
        degree=degree-180;
        flag=1;
    }
    if(degree>270&&degree<=360)
    {
        degree=360-degree;
    }

    radian=degree*3.142/180;
    cos_org=cos(radian);
    printf("\nEnter accuracy:");
    scanf("%f",&accuracy);
   do
    {
        num=pow(radian,i);
        for(m=1;m<=i;m++)
        {
            fact*=m;
        }
        sum+=(num/fact)*sign;
        fact=1;
        i+=2;
        diff=fabs(cos_org-sum);
        sign*=-1;
    }while(diff>=accuracy);
    if(flag==1)
    {
        sum*=-1;
    }
    printf("\nThe cosine of %f is %f\n\n",dummy,sum);
}
