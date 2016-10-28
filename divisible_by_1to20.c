#include<stdio.h>
main()
{
    unsigned long int i,p,flag=0;
    for(p=1;p<=10000000000;p++)
    {


            for(i=1;i<=20;i++)
            {
                if(p%i==0)
                {
                    flag=0;
                    continue;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        if(flag==0)
        {
            printf("\nThe smallest number that is divisible by 1 to 20 is %ld\n\n",p);
            exit(0);
        }

    }
}
