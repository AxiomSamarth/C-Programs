#include<stdio.h>
#include<stdlib.h>
main()
{
    char a[10],b[10];
    int i,len;
    printf("\nEnter the string a:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    len=i;
    for(i=0;i<len;i++)
    {
        b[i]=a[i];
    }
    b[len]='\0';
    printf("\n\nThe original string is %s",a);
    printf("\n\nThe copy of string a is string b which is %s\n\n",b);

}
