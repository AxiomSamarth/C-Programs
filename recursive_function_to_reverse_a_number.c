#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int dummy,count=0;
int reverse(int a,int rev)
{
    int rem,i;
        rem=a%10;
        rev=(rev*10)+rem;
        a/=10;
        do
        {
            rem=dummy%10;
            if(rem==0)
            {
                count++;
            }
            else
            {
                break;
            }
            dummy/=10;
        }while(dummy>0);

        if(a!=0)
        {
            reverse(a,rev);
        }
        else
        {
            for(i=1;i<=count;i++)
            {
                printf("0");
            }
            return rev;
        }

}
main()
{
    int a,result,rev=0;
    printf("\nEnter the number that has to be reversed:");
    scanf("%d",&a);
    dummy=a;
    printf("\nThe reverse of the number entered is ");
    result=reverse(a,rev);

    printf("%d.\n\n",result);
}
