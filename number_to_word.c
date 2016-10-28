#include<stdio.h>
main()
{
    int a,count=0,rev=0,rem,i,b;
    printf("\nEnter the integer:");
    scanf("%d",&a);
    b=a;
    do
    {
        rem=a%10;
        if(rem==0)
        {
            count++;
        }
        else
        {
            break;
        }
        a/=10;
    }while(a!=0);
    do
    {
        rem=b%10;
        rev=rev*10+rem;
        b/=10;
    }while(b>0);

    do
    {
        rem=rev%10;
        switch(rem)
        {
            case 0:printf("\tzero");
                    break;
            case 1:printf("\tone");
                    break;
            case 2:printf("\ttwo");
                    break;
            case 3:printf("\tthree");
                    break;
            case 4:printf("\tfour");
                    break;
            case 5:printf("\tfive");
                    break;
            case 6:printf("\tsix");
                    break;
            case 7:printf("\tseven");
                    break;
            case 8:printf("\teight");
                    break;
            case 9:printf("\tnine");
                    break;
            default:printf("\tNo number");
                    break;

            }
            rev/=10;
    }while(rev!=0);
    for(i=0;i<count;i++)
    {
        printf("\tzero");
    }
}
