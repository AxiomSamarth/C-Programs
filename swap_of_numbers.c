#include<stdio.h>
void add(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping by addition method\n\na=%d\tb=%d\n\n",a,b);
}
void xorg(int a,int b)
{
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAfter swapping by XOR gate method\n\na=%d\tb=%d\n\n",a,b);
}
void multiply(int a,int b)
{
    a=a*b/(b=a);
    b=a*b/(a);
    a=a*b/(b);
    printf("\nAfter swapping by multiplication method\n\na=%d\tb=%d\n\n",a,b);
}
main()
{
    int a,b;
    printf("\nEnter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    add(a,b);
    xorg(a,b);
    multiply(a,b);
}
