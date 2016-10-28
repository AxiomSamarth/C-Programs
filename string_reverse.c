#include<stdio.h>
#include<stdlib.h>
main()
{
    char a[20],temp;
    int i,len=0;
    printf("\nEnter the string:");
    scanf("%s",a);
    printf("\nThe inputed string is %s",a);
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;i<=(len)/2;i++)
    {
        temp=a[i];
        a[i]=a[len-i-1];
        a[len-i-1]=temp;
    }
    a[len]='\0';
    printf("\nThe reversed string is %s\n\n",a);
}
