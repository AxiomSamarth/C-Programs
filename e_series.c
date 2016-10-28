#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
  int i=0,n=0;
  float x,eorg,accuracy,diff,sum,term;
  printf("\nEnter the power of e:");
  scanf("%f",&x);
  printf("\nEnter accuracy:");
  scanf("%f",&accuracy);
  eorg=pow(2.718,x);
  printf("\nThe original value is %f\n",eorg);
  sum=1;
  term=1;
  do
  {
      term*=(float)x/(i+1);
      sum+=term;
      i++;
      n++;
  }while(n<=100);
  printf("\nThe value is %f\n",sum);
}

