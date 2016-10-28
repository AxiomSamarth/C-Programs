#include<stdio.h>
#include<stdlib.h>
main()
{
    struct student
    {
        int m1,m2,m3,total,sem;
        char name[20],USN[10];
    };
    struct student s[100],temp;
    int i,n,choice,j;
    printf("\nEnter the number of details that you will input now:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("\nEnter %s's USN: ",s[i].name);
        scanf("%s",s[i].USN);
        printf("\nEnter the marks of three subjects:");
        scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
        if(s[i].m1<0||s[i].m1>100||s[i].m2<0||s[i].m2>100||s[i].m3<0||s[i].m3>100)
        {
            printf("\nEnter valid marks folk..!1");
            exit(0);
        }
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        printf("\nEnter the semester(1/2/3/4/5/6/7/8):");
        scanf("%d",&s[i].sem);
        if(s[i].sem<=0||s[i].sem>8)
        {
            printf("\nWhich degree is this folk..!!");
            exit(0);
        }
    }
    printf("\nNow how would you like to sort the details..?");
    printf("\n1.By name.\n2.By USN.\n3.By total.\n4.By semester.");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n-i-1;j++)
            {
                if(strcmp(s[i].name,s[j].name)>0)
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }break;
        case 2:for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n-i-1;j++)
            {
                if(strcmp(s[i].USN,s[j].USN)>0)
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }break;
        case 3:for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n-i-1;j++)
            {
                if(s[i].total<s[j].total)
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }break;
        case 4:for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n-i-1;j++)
            {
                if(s[i].sem>s[j].sem)
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }break;
        default:printf("\nInvalid choice..!!");
        break;
    }
    printf("\n\nThe details sorted as per your requirement is\n\n");
    printf("USN\t\tName\tm1\tm2\tm3\tTotal\tSem\n");
    for(i=0;i<80;i++)
    printf("*");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\n",s[i].USN,s[i].name,s[i].m1,s[i].m2,s[i].m3,s[i].total,s[i].sem);
    }
}
