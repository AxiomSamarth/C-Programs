#include<stdio.h>
main()
{
    long int n,t,b,i,rem,diff,quo,ep,ep1;

    scanf("%ld",&t);
    if(t>=1&&t<=50)
    {
        for(i=0;i<t;i++)
        {

            scanf("%ld",&n);
            if(n>=1&&n<=1000000)
            {
                scanf("%ld",&b);
                if(b>=1&&b<=500)
                {
                    if(n>b)
                    {
                        quo=n/b;
                        ep=quo*b;
                        ep1=(quo+1)*b;
                        if(n-ep<ep1-n)
                        {
                            printf("\n%ld",ep);
                        }
                        if(n-ep>ep1-n)
                        {
                            printf("\n%ld",ep1);
                        }
                        if(n-ep==ep1-n)
                        {
                            printf("\n%ld",ep1);
                        }
                    }
                    else
                    {

                        quo=n/b;
                        ep=quo*b;
                        ep1=(quo+1)*b;
                        if(n-ep<ep1-n)
                        {
                            printf("\n%ld",ep1);
                        }
                        if(n-ep>ep1-n)
                        {
                            printf("\n%ld",ep);
                        }
                        if(n-ep==ep1-n)
                        {
                            printf("\n%ld",ep1);
                        }
                    }
                }

            }


        }
    }
}
