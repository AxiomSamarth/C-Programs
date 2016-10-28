#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[50];
    int age;
    int marks;
};
main()
{

    struct student s[100];
    int n,i,j,choice,temp,tempm,tempa;
    char tempn[50];

    printf("\nEnter the number of inputs:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the roll number of student:");
        scanf("%d",&s[i].roll);
        printf("\nEnter the name of the student:");
        scanf("%s",s[i].name);
        printf("\nEnter the age of the student:");
        scanf("%d",&s[i].age);
        printf("\nEnter the marks of the student:");
        scanf("%d",&s[i].marks);
    }
    printf("\n\nSo,Mr.User; How would you like to sort the details..??");
    printf("\n1.By roll number.\n2.By name.\n3.By age.\n4.By marks.");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(s[i].roll>s[j].roll)
                {
                    temp=s[i].roll;
                    s[i].roll=s[j].roll;
                    s[j].roll=temp;
                    strcpy(tempn,s[i].name);
                    strcpy(s[i].name,s[j].name);
                    strcpy(s[j].name,tempn);
                    tempa=s[i].age;
                    s[i].age=s[j].age;
                    s[j].age=tempa;
                    tempm=s[i].marks;
                    s[i].marks=s[j].marks;
                    s[j].marks=tempm;
                }
            }
        }
        break;
        case 2:for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(strcmp(s[i].name,s[j].name)>0)
                {
                    temp=s[i].roll;
                    s[i].roll=s[j].roll;
                    s[j].roll=temp;
                    strcpy(tempn,s[i].name);
                    strcpy(s[i].name,s[j].name);
                    strcpy(s[j].name,tempn);
                    tempa=s[i].age;
                    s[i].age=s[j].age;
                    s[j].age=tempa;
                    tempm=s[i].marks;
                    s[i].marks=s[j].marks;
                    s[j].marks=tempm;
                }
            }
        }
        break;
        case 3:for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(s[i].age>s[j].age)
                {
                    temp=s[i].roll;
                    s[i].roll=s[j].roll;
                    s[j].roll=temp;
                    strcpy(tempn,s[i].name);
                    strcpy(s[i].name,s[j].name);
                    strcpy(s[j].name,tempn);
                    tempa=s[i].age;
                    s[i].age=s[j].age;
                    s[j].age=tempa;
                    tempm=s[i].marks;
                    s[i].marks=s[j].marks;
                    s[j].marks=tempm;
                }
            }
        }break;
        case 4:for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(s[i].marks<s[j].marks)
                {
                     temp=s[i].roll;
                    s[i].roll=s[j].roll;
                    s[j].roll=temp;
                    strcpy(tempn,s[i].name);
                    strcpy(s[i].name,s[j].name);
                    strcpy(s[j].name,tempn);
                    tempa=s[i].age;
                    s[i].age=s[j].age;
                    s[j].age=tempa;
                    tempm=s[i].marks;
                    s[i].marks=s[j].marks;
                    s[j].marks=tempm;
                }
            }
        }
        break;
        default:printf("\nInvalid choice folk..!!");
        break;
    }
    printf("\nThe new details as per your requirement Mr.User, goes like this\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n\n");
        printf("Roll no: %d",s[i].roll);
        printf("\tName : %s",s[i].name);

        printf("\tAge : %d",s[i].age);
        printf("\tMarks : %d ",s[i].marks);
    }
    printf("\n\n\n");
}
