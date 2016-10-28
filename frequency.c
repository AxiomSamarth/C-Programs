#include<stdio.h>
#include<stdlib.h>

struct keyFrequency
{
    int key,frequency;
}

main()
{
    int a[7] = {1,2,2,2,2,3,1};
    int i,j,k,count,temp,n=7;
    struct keyFrequency s[7];

   for(i=0;i<n;i++)
   {
       for(j=0;j<n-1;j++)
       {
           if(a[i] < a[j])
           {
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
       }
   }

   printf("\nThe array is\t");
   for(i=0;i<n;i++)
   {
       printf("\t%d",a[i]);
   }


   count = 1;
   k = 0;

   for(i=0;i<n;i++)
   {
       if(a[i+1] == a[i])
       {
            count ++;
       }
       else
       {
           s[k].key = a[i];
           s[k++].frequency = count;
           count = 1;
       }
   }

   printf("\nThe result is\n");
   for(i=0;i<k;i++)
   {
       printf("\t\n%d occurs %d times\n",s[i].key,s[i].frequency);
   }
}
