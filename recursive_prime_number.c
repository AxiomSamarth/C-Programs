#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int rem,sq,divi;
void prime(int a)
{
    if(divi<=sq)
    {
        rem=a%divi;
        if(rem==0)
        {
            printf("\nThe entered number is not prime..!!\n\n");
            exit(0);
        }
        else
        {
            divi++;
            prime(a);
        }
    }
    else
    {

        printf("\n\nThe entered integer is a prime number..!!\n\n");
        exit(0);

    }

}
main()
{
    int a;
    printf("\nEnter the number whose prime nature is to be found out : ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\n1 is not actually considered as a prime number.!!\n\n");
        exit(0);
    }
    divi=2;
    sq=sqrt(a);
    prime(a);
}

