#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    int n,i,len=0;
    char a[100];
    printf("\nEnter the string a:");
    scanf("%s",a);
    printf("\nThe string length is %d\n\n",strlen(a));
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    printf("\nThe string length by simulation is %d\n\n",len);
    for(i=0;i<=len/2;i++)
    {
        if(a[i]==a[len-i-1])
        {
            continue;
        }
        else
        {
            printf("\nThe string is not a palindrome..!!\n\n");
            exit(0);
        }
    }
    printf("\nThe string is a palindrome..!!\n\n");
}
