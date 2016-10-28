#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int i=0;
    float sum=0,cos_org,degrees,radians,accuracy,diff,term;
    printf("\nEnter the angle in degrees:");
    scanf("%f",&degrees);
    radians=degrees*3.142/180;
    cos_org=cos(radians);
    printf("\n\nThe original cosine value is %f.",cos_org);
    printf("\n\nEnter the accuracy :");
    scanf("%f",&accuracy);
    term=1;
    do
    {
        sum+=term;
        term=term*radians*radians*-1/((i+1)*(i+2));
        i+=2;

    }while(diff>=accuracy);
    printf("\n\nThe cosine value is %f.\n\n",sum);
}
