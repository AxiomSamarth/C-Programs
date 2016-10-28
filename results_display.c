#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    float SGPA;
    char name[20],USN[10];
};
main()
{
    struct student s[10],temp;
    int i,n,j;
    float temp1,sgpa;
    char name1[20];
    printf("\nHow many inputs will you give:");
    scanf("%d",&n);
    printf("\nPlease enter the details below:\n\n");
    for(i=0;i<n;i++)
    {
        printf("\nEnter the name of the student:");
        scanf("%s",s[i].name);
        printf("\nEnter %s's USN :",s[i].name);
        scanf("%s",s[i].USN);
        printf("\nEnter %s's SGPA : ",s[i].name);
        scanf("%f",&s[i].SGPA);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].SGPA<s[j].SGPA)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sgpa=s[i].SGPA;
        if(sgpa==s[i+1].SGPA)
        {
            if(strcmp(s[i].name,s[i+1].name)<0)
            {
                strcpy(name1,s[i].name);
                strcpy(s[i].name,s[i+1].name);
                strcpy(s[i+1].name,name1);
            }
        }
        else
        {
            sgpa=s[i+1].SGPA;
            break;
        }
    }
     printf("\tUSN\tName\tSGPA");
    for(i=0;i<n;i++)
    {

        printf("\n%s\t%s\t%f",s[i].USN,s[i].name,s[i].SGPA);
    }
    printf("\n\n");
}
