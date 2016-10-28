#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int lower,upper,divi=2,rem,sq;
void prime()
{
    if(lower==2||lower==3)
    {
        printf("\t%d",lower);
    }
    if(lower<=upper)
    {
    sq=sqrt(lower);
    if(divi<=sq)
    {
    rem=lower%divi;

    if(rem==0)
    {
        lower++;
        divi=2;
        prime();
    }
    else
    {
        divi++;
        prime();
    }
    }
    else
    {
        if(rem!=0)
        printf("\t%d",lower);
        lower++;
        divi=2;
        prime();
    }
    }
    else
    {
        exit(0);
    }

}
main()
{
    printf("\nEnter the lower limit of the range:");
    scanf("%d",&lower);
    printf("\nEnter the upper limit of the range:");
    scanf("%d",&upper);
    prime();
}
