#include<stdio.h>
#include<stdlib.h>
main()
{
    char a[100];
    int i;
    printf("\nEnter the string:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            a[i]-=32;
        }
    }
    printf("\nThe string in uppercase letters is ");
    puts(a);
}
