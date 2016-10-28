#include<stdio.h>
#include<stdlib.h>
main()
{
    int len=0,i;
    char a[100];
    printf("\nEnter the string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    printf("\nThe string length of the string 'a' is %d",len);
}
