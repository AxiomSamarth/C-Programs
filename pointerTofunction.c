#include<stdio.h>
#include<stdlib.h>
void hello(void (*)(void));
void world();
main()
{
    int a;
    void (*p)(void (*)(void))=hello,(*q)(void)=world;
    printf("\nEnter a:");
    scanf("%d",&a);
    p(q);
    q();
}
void hello(void (*q)(void))
{
    printf("\nHello");
    void (*p)(void)=world;
    q();
}
void world()
{
    printf(" world..!!\n\n");
}
