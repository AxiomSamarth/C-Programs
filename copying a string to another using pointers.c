#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    char s1[]="SAMARTH",s2[20],*p1=s1,*p2=s2;
    int i=0;
    for(i=0;*(p1+i)!='\0';i++)
    {
        p2[i]=*(p1+i);
    }
    p2[i]='\0';
    puts(p2);
}
