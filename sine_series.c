#include<stdio.h>
#include<math.h>
main()
{
    int i=1,m,fact=1,sign=1,flag=0,dummys,rem;
    float sin_org,sum=0,diff,accuracy,degrees,radian,num,dummy,decimal;
    printf("\nEnter the angle in degree:");
    scanf("%f",&degrees);
    radian=degrees*3.142/180;
     sin_org=sin(radian);
     printf("\nThe original sine value is %f.\n",sin_org);
    dummy=degrees;

    dummys=(degrees);
    decimal=degrees-(dummys);



    if(degrees<0)
    {
        degrees*=-1;
        flag=2;
    }
    if(degrees>360)
    {
        rem=dummys%360;

        degrees=rem+decimal;

    }

    if(degrees>0&&degrees<=90)
    {
        degrees=degrees;
    }
     if(degrees>90&&degrees<=180)
    {
        degrees=180-degrees;
    }
     if(degrees>180&&degrees<=270)
    {
        degrees=(degrees-180);
        flag=1;

    }
    if(degrees>270&&degrees<=360)
    {
        degrees=360-degrees;
        flag=1;
    }

    radian=degrees*3.142/180;
     sin_org=sin(radian);
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
        i+=2;
        fact=1;
        sign*=-1;
        diff=fabs(sum-sin_org);
    }while(diff>=accuracy);
    if(flag==1&&dummy>0)
    {
        sum*=-1;
    }
    if(flag==2&&dummy<0)
    {
        sum*=-1;
    }
    printf("\nSine of %f is %f\n\n",dummy,sum);
}
