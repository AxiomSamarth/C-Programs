#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int hundred(int rem)
{
    switch(rem)
    {
        case 1:printf("One hundred ");
        break;
        case 2:printf("Two hundred ");
        break;
        case 3:printf("Three hundred ");
        break;
        case 4:printf("Four hundred ");
        break;
        case 5:printf("Five hundred ");
        break;
        case 6:printf("Six hundred ");
        break;
        case 7:printf("Seven hundred ");
        break;
        case 8:printf("Eight hundred ");
        break;
        case 9:printf("Nine hundred ");
        break;

    }

}
int tens(int rem1)
{
        switch(rem1)
        {

            case 2:printf("Twenty ");
            break;
            case 3:printf("Thirty ");
            break;
            case 4:printf("Forty ");
            break;
            case 5:printf("Fifty ");
            break;
            case 6:printf("Sixty ");
            break;
            case 7:printf("Seventy ");
            break;
            case 8:printf("Eighty ");
            break;
            case 9:printf("Ninety ");
            break;
        }


}
int units(int rem1,int rem)
{
    if(rem1!=1)
    {
    switch(rem)
    {
        case 0:printf("Zero ");
        break;
        case 1:printf("One ");
        break;
        case 2:printf("Two ");
        break;
        case 3:printf("Three ");
        break;
        case 4:printf("Four ");
        break;
        case 5:printf("Five ");
        break;
        case 6:printf("Six ");
        break;
        case 7:printf("Seven ");
        break;
        case 8:printf("Eight ");
        break;
        case 9:printf("Nine ");
        break;
    }
    }
    else
    {
        switch(rem)
    {
        case 1:printf("Eleven ");
        break;
        case 2:printf("Twelve ");
        break;
        case 3:printf("Thirteen ");
        break;
        case 4:printf("Fourteen ");
        break;
        case 5:printf("Fifteen ");
        break;
        case 6:printf("Sixteen");
        break;
        case 7:printf("Seventeen ");
        break;
        case 8:printf("Eighteen ");
        break;
        case 9:printf("Nineteen ");
        break;
    }
    }

}
main()
{
    int a,rem,rem1,div,b[10],i=0,j,k,temp;
    printf("\nEnter the integer to be read:");
    scanf("%d",&a);
    if(a==0)
    {
        printf("\nZero ");
        exit(0);
    }
    do
    {
        rem=a%1000;
        b[i++]=rem;
        a/=1000;
    }while(a!=0);
    for(j=0;j<i-1;j++)
    {
        temp=b[j];
        b[j]=b[i-j-1];
        b[i-j-1]=temp;
    }
    for(j=0;j<i;j++)
    {
        printf("\n%d\n",b[j]);
    }
    printf("\n");
    for(j=0;j<i;j++)
    {
        if(b[j]>=100)
        {
            rem=b[j]/100;
            hundred(rem);
            b[j]=b[j]%100;
            rem=b[j]%10;
            rem1=b[j]/10;
            if(rem1==1&&rem==0)
            {
                printf("ten ");
            }
            if(rem!=1&&rem==0)
            {
            tens(rem1);
            }
            if(rem!=0)
            {
                tens(rem1);
                units(rem1,rem);
            }
        }
        else
        {
            rem=b[j]%10;
            rem1=b[j]/10;
            if(rem1==1&&rem==0)
            {
                printf("ten ");
            }
            if(rem!=1&&rem==0)
            {
            tens(rem1);
            }
            if(rem!=0)
            {
                tens(rem1);
                units(rem1,rem);
            }
        }
        if((i-j)%3==0)
        {
            printf("million ");
        }
        else if((i-j)%3==2)
        {
            printf("thousand ");
        }
    }
}
