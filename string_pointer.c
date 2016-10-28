#include<stdio.h>
main()
{
    char name[50],*p,*q;
    char *name1="SAGAR";
    p=name;
    q=name1;
    printf("\nEnter the string:");
    gets(name);
    puts(p);
    puts(q);
}
