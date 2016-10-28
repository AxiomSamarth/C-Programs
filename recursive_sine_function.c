#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void sine_fun(float radians,float sum,int i,float term,float accuracy)
{
    float sin_org=sin(radians),diff=fabs(sin_org-sum);
    if(diff>=accuracy)
    {
        sum+=term;
        term=term*radians*radians*-1/((i+1)*(i+2));
        i+=2;

        diff=fabs(sin_org-sum);
        sine_fun(radians,sum,i,term,accuracy);
    }
    else
    {
        printf("\nThe sine value is %f.\n\n",sum);

    }

}
main()
{
    int i=1,n=0;
    float degrees,radians,sum,term,accuracy=0.0001;
    printf("\nEnter the angle in degrees:");
    scanf("%f",&degrees);

    radians=degrees*3.142/180;
    term=radians;
    sum=0;
    sine_fun(radians,sum,i,term,accuracy);


}
