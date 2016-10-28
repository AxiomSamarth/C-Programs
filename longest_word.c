#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char a[1000],b[500][50];
    int len[500],big=0,i,count=0,print[100],j=0,k=0;
    printf("\nEnter the string:");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {

        if(isalpha(a[i])!=0||a[i+1]=='\0')
        {
            if(a[i]!='.'||a[i]!='?'||a[i]!='!')
            b[j][k++]=a[i];
        }
        else
        {
            k=0;
            j++;
            count++;
        }
    }
    printf("\nThe words are\n");
    for(i=0;i<=count;i++)
    {
        puts(b[i]);
    }
    for(i=0;i<=count;i++)
    {
        len[i]=strlen(b[i]);
    }
    printf("\n\nThe lengths of the words are\n");
    for(i=0;i<=count;i++)
    {
        printf("\t%d",len[i]);
    }
    for(i=0;i<=count;i++)
    {
        if(big<len[i])
        {
            big=len[i];
        }
    }
    printf("\nThe largest word is of %d letters and is/are \n",big);
    j=0;
    for(i=0;i<=count;i++)
    {
        if(len[i]==big)
        {
            printf("\n");
           puts(b[i]);
        }
    }



}
