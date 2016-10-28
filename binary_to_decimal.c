#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int bin,rem,sum=0,i=0;
    printf("\nEnter the binary number:");
    scanf("%d",&bin);

    do
    {
        rem=bin%10;
        if(rem==0||rem==1)
        {

            sum+=rem*pow(2,i++);

        }
        else
        {
            printf("\nEnter binary number bro..!!\n\n");
            exit(0);
        }
        bin/=10;
    }while(bin>0);
    printf("\nThe decimal equivalent is %d\n\n",sum);
}
