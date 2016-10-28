#include<stdio.h>
#include<stdlib.h>
main()
{
    int year1[10],year2[10],day1[10],day2[10],month1[10],month2[10],year[10],day[10],month[10],i,b,c;
    int year1c[10],year2c[10],day1c[10],day2c[10],month1c[10],month2c[10],yearc[10],dayc[10],monthc[10],days=0,months=0,years=0;
    printf("\nEnter number of b valaya:");
    scanf("%d",&b);
    printf("\nEnter number of c valaya:");
    scanf("%d",&c);
    for(i=0;i<b;i++)
    {
        printf("\n%d\n",i+1);
        printf("\nEnter the year of joining:");
    scanf("%d",&year1[i]);
    printf("\nEnter the year of leaving:");
    scanf("%d",&year2[i]);
    printf("\nEnter the month of joining:");
    scanf("%d",&month1[i]);
    printf("\nEnter the month of leaving:");
    scanf("%d",&month2[i]);
    printf("\nEnter the day of joining:");
    scanf("%d",&day1[i]);
    printf("\nEnter the day of leaving:");
    scanf("%d",&day2[i]);
    year[i]=year2[i]-year1[i];
    month[i]=month2[i]-month1[i];
    day[i]=day2[i]-day1[i];
    if(month[i]<0&&day[i]>0)
    {
        year[i]-=1;
        month[i]=12-abs(month[i]);
    }
    if(month[i]<0&&day[i]<0)
    {
        year[i]=year[i]-1;
        month[i]=12-abs(month[i])-1;
        day[i]=30-abs(day[i]);
    }
    printf("\nyear=%d month=%d day=%d\n\n",year[i],month[i],day[i]);
    }
    for(i=0;i<b;i++)
    {
        years+=year[i];
        months+=month[i];
        days+=day[i];
    }
    if(days>=30)
    {
        months=months+(days/30);
        days=days%30;
    }
    if(month>=12)
    {
        years+=(months/12);
        months=months%12;
    }




    printf("\nYear=%d month=%d day=%d\n\n",years,months,days);


}
