#include<stdio.h>
#include<stdlib.h>
main()
{
    char a[10],b[10];
    int i;
    printf("\nEnter the string a:");
    scanf("%s",a);
    printf("\nEnter the string b:");
    scanf("%s",b);
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
    {
        if(a[i]-b[i]==0)
        {
            continue;
        }
        else if(a[i]-b[i]>0)
        {
            printf("\nString 'a' is greater..!!\n");
            exit(0);
        }
        else
        {
            printf("\nString 'b' is greater..!!\n");
            exit(0);
        }
    }
    printf("\nBoth the strings are equal..!!\n\n");
}
