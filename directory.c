#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    char name[100][20],num[100][15],key[20];
    int n,i,choice;
    printf("\nEnter the number of details you'regoing to input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the name : ");
        scanf("%s",name[i]);
        printf("\nEnter the number : ");
        scanf("%s",num[i]);
    }
    printf("\nHow would you like to search ? \n1.By name.\n2.By number.\n\n");
    printf("\nEnter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\nEnter the name :");
                scanf("%s",key);
                for(i=0;i<n;i++)
                {
                    if(strcmp(key,name[i])==0)
                    {
                        printf("\nThe contact number of %s is %s.",name[i],num[i]);
                        exit(0);
                    }
                }
                printf("\nThe name wasn't found..!!");
                break;
        case 2:printf("\nEnter the number:");
                scanf("%s",key);
                for(i=0;i<n;i++)
                {
                    if(strcmp(key,num[i])==0)
                    {
                        printf("\nThe contact number %s belongs to %s.",num[i],name[i]);
                        exit(0);
                    }
                }
                printf("\nThe number was not located in the directory..!!");
                break;
        default:printf("\nInvalid choice..!!\n\n");
        break;
    }
}
