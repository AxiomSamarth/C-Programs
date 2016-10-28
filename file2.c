#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,n,num;
    FILE *fp1,*fp2,*fp3;
    printf("\nEnter the number of entries:");
    scanf("%d",&n);
    if((fp1=fopen("number","w"))==NULL)
       {
           printf("\nError opening file..");
           exit(0);
       }
    else
    {
        printf("\nFile opened successfully\n\n");
    }
    printf("\nEnter %d numbers\n",n);
    for(i=0;i<n;i++)
    {
        printf("\nNumber %d : ",i+1);
        scanf("%d",&num);
        putw(num,fp1);
    }
    fclose(fp1);
    if((fp1=fopen("number","r"))!=NULL);
    fp2=fopen("even","w");
    fp3=fopen("odd","w");
    while((num=getw(fp1))!=EOF)
    {
        if(num%2==0)
        {
            putw(num,fp2);
        }
        else
        {
            putw(num,fp3);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    printf("\nThe contents even number file is\n");
    fp2=fopen("even","r");
    while((num=getw(fp2))!=EOF)
    {
        printf("\t%d",num);
    }
    printf("\nThe contents odd number file is\n");
    fclose(fp2);
    fp3=fopen("odd","r");
    while((num=getw(fp2))!=EOF)
    {
        printf("\t%d",num);
    }
    fclose(fp3);
}
