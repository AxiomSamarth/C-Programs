#include<stdio.h>
main()
{
    int bin[100],i=0,lower,upper,dummy,rem,n,sum=0;
    printf("\nEnter the lower limit of the range of number to be converted into binary:");
    scanf("%d",&lower);
    printf("\nEnter the upper limt of the range of number t be converted into binary:");
    scanf("%d",&upper);
    dummy=lower;
   for(i=0;i<8;i++)
   {
       bin[i]=0;
   }
    for(dummy;dummy<=upper;dummy++)
    {
        lower=dummy;
        i=0;
        printf("\n%d : ",lower);
        for(lower;lower>0;lower/=2)
        {
            rem=lower%2;
            bin[i++]=rem;
        }
        for(n=7;n>=0;n--)
        {
            printf("%d",bin[n]);
            if(bin[n]==1)
            {
                sum++;
            }
        }

    }
    printf("\nTotal number of 1's is %d",sum);
}
