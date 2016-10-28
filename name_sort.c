#include<stdio.h>
#include<string.h>
main()
{

    int i,n,j;
     char a[50][20],temp[20];
    printf("\nEnter the number of inputs:");
    scanf("%d",&n);
    printf("\nEnter %d names:",n);
    for(i=0;i<n;i++)
    {
        printf("\nName[%d]=",i+1);
     scanf("%s",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    printf("\nThe sorted names are\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        puts(a[i]);
    }
}
