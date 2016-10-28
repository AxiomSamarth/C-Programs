#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
    char a[1000];
    int word=0,sent=0,charac=0,i;
    printf("\nEnter the string:");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(isalpha(a[i])==0||a[i+1]=='\0')
        {
            word++;
        }
        else if(isalpha(a[i])!=0)
        {
            charac++;
        }
        if(a[i]=='.'||a[i]=='?'||a[i]=='!'||a[i+1]=='\0')
        {
            sent++;
        }

    }

    printf("\nThe number of words in the string is %d\nThe number of characters in the string is %d\nThe number of sentences in the string is %d\n",word,charac,sent);
}
