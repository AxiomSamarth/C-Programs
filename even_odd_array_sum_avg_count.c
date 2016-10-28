#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[100],i,n,sume=0,sumo=0,ne=0,no=0,nz=0;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    printf("\nEnter %d elements into the array:",n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            nz++;
        }
        else if(a[i]%2==0)
        {
            sume+=a[i];
            ne++;
        }
        else
        {
           sumo+=a[i] ;
           no++;
        }
    }
    printf("\nThe average of %d odd elements of the array is %f\n",no,(float)sumo/no);
    printf("\nThe average of %d even elements of the array is %f\n",ne,(float)sume/ne);
    printf("\nThere are %d elements in the array equal to zero\n",nz);
}
