#include<stdio.h>
#include<stdlib.h>
struct student{
    int roll;
    char name[20];
};

main()
{
    struct student s;
    s.roll=1;
    strcpy(s.name,"SAMARTH");
    printf("The size of student structure is %d\n",sizeof(s));
}
