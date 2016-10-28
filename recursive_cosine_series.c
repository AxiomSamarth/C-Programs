#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void cosine_fun(float radians,float accuracy,float sum,int i, float term)
{
    float cos_org=cos(radians),diff=fabs(cos_org-sum);
    if(diff>=accuracy)
    {
        sum+=term;
        term*=radians*radians*-1/((i+1)*(i+2));
        i+=2;
        diff=fabs(cos_org-sum);
        cosine_fun(radians,accuracy,sum,i,term);
    }
    else
    {
        printf("\nThe cosine value is %f.\n\n",sum);
    }
}

main()
{
    int i=0;
    float degrees,radians,accuracy=0.0001,sum=0,term;
    printf("\nEnter the angle in degrees:");
    scanf("%f",&degrees);
    radians=degrees*3.142/180;
    term=1;
    cosine_fun(radians,accuracy,sum,i,term);
}
