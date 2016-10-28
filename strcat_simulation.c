#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,j,len;
    char a[20],b[20],c[50];
    printf("\nEnter the string a:");
    scanf("%s",a);
    printf("\nEnter the string b:");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++);
    len=i;
    for(i=0;i<len;i++)
    {
        c[i]=a[i];
    }
    for(i=0;b[i]!='\0';i++)
    {
        c[len++]=b[i];
    }
    printf("\nThe concatenated string is ");
    for(i=0;i<len;i++)
    printf("%c",c[i]);



}
