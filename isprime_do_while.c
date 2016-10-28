#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int a,div,sq;
    printf("\nEnter the integer whose prime nature is to be checked:");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\n1 is neither a prime number nor a composite number..!!\n\n");
    }

    sq=sqrt(a);
    div=2;
    do
    {
        if(a%div==0)
        {
            printf("\n%d is not a prime number..!!\n\n",a);
            exit(0);
        }
        else
        {
            div++;
        }
    }while(div<=sq);
    printf("\nThe integer %d is a prime number..!!\n\n",a);
}
