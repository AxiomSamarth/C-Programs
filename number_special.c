#include<stdio.h>
#include<math.h>
main()
{
    long long int n,a[10000],i,sumd=0,sum=0,sum1=0,rem,dummy;
    scanf("%lld",&n);
    if(n>=2&&n<=10000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a>=1&&a<=10^10000)
            {
                dummy=a[i];
            do
            {
                rem=dummy%10;
                sumd+=rem;
                dummy/=10;
            }while(dummy!=0);
            sum1+=sumd;
            sumd=0;
            sum+=a[i];
        }
        }
    }


    printf("\n%lld",sum1%9-(sum)%9);

}
