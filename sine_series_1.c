#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int i=1;
    float degrees,radians,term,sum=0,sin_org,accuracy,diff;
    printf("\nEnter the angle in degrees:");
    scanf("%f",&degrees);
    radians=degrees*3.142/180;
    sin_org=sin(radians);
    printf("\nThe original value of sine is %f.\n",sin_org);
    printf("\nEnter accuracy:");
    scanf("%f",&accuracy);
    term=radians;

    do
    {
        sum+=term;
        term=term*radians*radians*-1/((i+1)*(i+2));
        i+=2;
        diff=fabs(sin_org-sum);
    }while(diff>=accuracy);
    printf("\nThe sine value by program is %f.\n",sum);
}
