#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int a,b,c;
    float d,root1,root2;
    printf("\nEnter the non-zero coefficients of the quadratic equation:");
    scanf("%d%d%d",&a,&b,&c);
    if(a*b*c==0)
    {
        printf("\nInvalid co-efficients..!!");
        exit(0);
    }
    d=b*b-4*a*c;
    if(d==0)
    {
        printf("\nThe roots are equal and they are ");
        root1=root2=-b/(2*a);
        printf("%f and %f\n",root1,root2);
    }
    else if(d>0)
    {
        printf("\nThe roots are real and distinct and they are ");
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("%f and %f\n\n",root1,root2);
    }
    else
    {
        root1=-b/(2*a);
        root2=sqrt(-d)/(2*a);
        printf("\nThe roots are imaginary and they are %f+i%f and %f-i%f\n\n",root1,root2,root1,root2);;

    }
}
