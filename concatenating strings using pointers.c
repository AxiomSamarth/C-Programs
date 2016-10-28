#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    char str1[20],str2[20],*s1=str1,*s2=str2;
    printf("\nEnter the string 1:");
    gets(str1);
    printf("\nEnter the string 2:");
    gets(str2);
    int i=0,j=0;
    for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';j++)
    {
        s1[i++]=s2[j];
    }
    s1[i]='\0';
    printf("\nThe concatenated string is %s\n",s1);
}
