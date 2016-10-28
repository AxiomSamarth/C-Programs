#include<stdio.h>
#include<stdlib.h>
main()
{
    int a;
    printf("\nEnter the natural integer:");
    scanf("%d",&a);
    if(a<=0)
    {
        printf("\nThe integer inputted isn't a natural integer..!!\n\n");
        exit(0);
    }
    if(a%2==0)
    {
        printf("\nOh..!! The integer %d is even number..:):)\n\n",a);
        exit(0);
    }
    else
    {
        printf("\nHmmm..!! The integer %d is odd number..:):)\n\n",a);
    }
}
