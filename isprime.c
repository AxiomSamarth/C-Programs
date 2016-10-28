#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int a,div,i,sq;
    printf("\nEnter the integer whosr prime nature is to be checked:");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\n1 is neither prime nor a composite number..!!\n\n");
        exit(0);
    }
    sq=sqrt(a);
    for(div=2;div<=sq;div++)
    {
        if(a%div==0)
        {
            printf("\n%d is not a prime number..!!\n\n",a);
            exit(0);
        }
    }
    printf("\n%d is a prime number..!!\n\n",a);
    exit(0);
}
