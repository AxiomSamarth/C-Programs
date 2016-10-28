#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
main()
{
    int age;
    char gender;
    printf("\nEnter your gender [male-M and female-F]:");
    scanf("%c*%c",&gender);
    printf("\nEnter your age:");
    scanf("%d",&age);
    if(isalpha(age)==0)
    {
        printf("\nEnter the proper age..!!\n");
        exit(0);
    }

    if(gender!='M'&&gender!='F')
    {
        printf("\nInvalid detail, sorry cannot proceed..!!\n\n");
        exit(0);
    }
    if(age>=18&&gender=='F')
    {
        printf("\nCongrats lady..!! You are eligible to marry..!!\n\n");
        exit(0);
    }
    else if(age<18&&gender=='F')
    {
        printf("\nOh girl, you aren't eligible to marry now..!!\n\n");
        exit(0);
    }
    else if(age>=21&&gender=='M')
    {
        printf("\nCongrats lad..!! You are eligible to marry..!!\n\n");
        exit(0);
    }
    else
    {
        printf("\nNo bro..!! You are not eligible to marry now..!!\n\n");
        exit(0);
    }
}
