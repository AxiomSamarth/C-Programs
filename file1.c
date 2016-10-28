#include<stdio.h>
void main()
{
    char file1[20];
    FILE *fp1;
    int i,n,num;
    printf("\nEnter the name of the file:");
    scanf("%s",file1);
    if((fp1=fopen(file1,"w"))==NULL)
    {
        printf("\nError opening file");
        exit(0);
    }
    printf("\nValue for n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        putw(num,fp1);
    }
    fclose(fp1);
    fopen(file1,"r");
    while((num=getw(fp1))!=EOF)
    {
        printf("%d\t",num);
    }
    fclose(fp1);
}
