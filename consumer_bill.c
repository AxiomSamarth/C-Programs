#include<stdio.h>
struct bill
{
    int cost[20],total,num;
    char product[20][20],brand[20][20];
};
main()
{
    struct bill a[10];
    int i,n,total,m,j;
    printf("\nEnter the number of costumers:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the number of products purchased by customer %d:",i+1);
        scanf("%d",&m);
        a[i].num=m;
        a[i].total=0;
        for(j=0;j<m;j++)
        {
            printf("\nEnter product %d:",j+1);
            scanf("%s",a[i].product[j]);
            printf("\nEnter the brand :");
            scanf("%s",a[i].brand[j]);
            printf("\nEnter the cost of product:");
            scanf("%d",&a[i].cost[j]);
            a[i].total+=a[i].cost[j];
        }
    }
    printf("\nThe bill is\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n\n");
        for(j=0;j<a[i].num;j++)
        {
            printf("\n\n");
            printf("\nProduct is %s",a[i].product[j]);
            printf("\nBrand is %s",a[i].brand[j]);
            printf("\nCost is %d",a[i].cost[j]);
            printf("\nTotal is %d",a[i].total);
        }
    }
}

