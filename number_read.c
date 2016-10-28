#include<stdio.h>
#include<stdlib.h>
main()
{
    unsigned long int a[10],b,i=0,rem,j,temp,c[10],k,hun,tens,rem1;
    printf("\nEnter the integer to be read:");
    scanf("%ld",&b);
    if(b>999999999)
    {
        printf("\nPlease limit it to a nine digit number...!!");
        exit(0);
    }
    if(b==0)
    {
        printf("\nZero\n\n");
        exit(0);
    }
    printf("\n\n");
    do
    {
        rem=b%1000;
        b/=1000;
        a[i++]=rem;
    }while(b!=0);


    for(j=0,k=i-1;j<i&&k>=0;j++,k--)
    {
        c[j]=a[k];
    }

    for(j=0;j<i;j++)
    {


        if(c[j]>=100)
    {
    hun=c[j]/100;

    }

    else
    {
        if(c[j]<10)
        {
           switch(c[j])
            {
        case 0:printf("");
        break;
        case 1:printf("One");
        break;
        case 2:printf("Two");
        break;
        case 3:printf("Three");
        break;
        case 4:printf("Four");
        break;
        case 5:printf("Five");
        break;
        case 6:printf("Six");
        break;
        case 7:printf("Seven");
        break;
        case 8:printf("Eight");
        break;
        default:printf("Nine");
        break;
            }

        }
        else
    {
        tens=c[j]%100;
    rem=tens/10;
    rem1=tens%10;


    if(rem==1)
    {
        switch(rem1)
        {
            case 0:printf("Ten");
            break;
            case 1:printf("Eleven");
            break;
            case 2:printf("Twelve");
            break;
            case 3:printf("Thirteen");
            break;
            case 4:printf("Fourteen");
            break;
            case 5:printf("Fifteen");
            break;
            case 6:printf("Sixteen");
            break;
            case 7:printf("Seventeen");
            break;
            case 8:printf("Eighteen");
            break;
            default:printf("Ninteen");
            break;
        }
    }
    if(rem>1)
    {
        if(rem1==0)
        {
            switch(rem)
            {
                case 2:printf("Twenty");
                break;
                case 3:printf("Thirty");
                break;
                case 4:printf("Forty");
                break;
                case 5:printf("Fifty");
                break;
                case 6:printf("Sixty");
                break;
                case 7:printf("Seventy");
                break;
                case 8:printf("Eighty");
                break;
                default:printf("Ninety");
                break;
            }
        }
        else
        {
            switch(rem)
            {
                case 2:printf("Twenty");
                break;
                case 3:printf("Thirty");
                break;
                case 4:printf("Forty");
                break;
                case 5:printf("Fifty");
                break;
                case 6:printf("Sixty");
                break;
                case 7:printf("Seventy");
                break;
                case 8:printf("Eighty");
                break;
                default:printf("Ninety");
                break;
            }
            printf(" ");
            switch(rem1)
            {
        case 0:printf("");
        break;
        case 1:printf("One");
        break;
        case 2:printf("Two");
        break;
        case 3:printf("Three");
        break;
        case 4:printf("Four");
        break;
        case 5:printf("Five");
        break;
        case 6:printf("Six");
        break;
        case 7:printf("Seven");
        break;
        case 8:printf("Eight");
        break;
        default:printf("Nine");
        break;
            }
        }
    }
    }
     if(i-j==3)
        {
            printf(" Million ");
        }
        if(i-j==2&&c[j]!=0)
        {
            printf(" Thousand ");
        }
    continue;
    }

    switch(hun)
    {
        case 0:printf("");
        break;
        case 1:printf("One Hundred");
        break;
        case 2:printf("Two Hundred");
        break;
        case 3:printf("Three Hundred");
        break;
        case 4:printf("Four Hundred");
        break;
        case 5:printf("Five Hundred");
        break;
        case 6:printf("Six Hundred");
        break;
        case 7:printf("Seven Hundred");
        break;
        case 8:printf("Eight Hundred");
        break;
        default:printf("Nine Hundred");
        break;
    }

    tens=c[j]%100;
    rem=tens/10;
    rem1=tens%10;
    if(tens!=0)
    printf(" and ");
    if(rem==0)
    {
        switch(rem1)
        {
            case 0:printf("");
            break;
            case 1:printf(" One");
            break;
            case 2:printf("Two");
        break;
        case 3:printf("Three");
        break;
        case 4:printf("four");
        break;
        case 5:printf("Five");
        break;
        case 6:printf("Six");
        break;
        case 7:printf("Seven");
        break;
        case 8:printf("Eight");
        break;
        default:printf("Nine");
        break;
        }
    }
    if(rem==1)
    {
        switch(rem1)
        {
            case 0:printf("Ten");
            break;
            case 1:printf("Eleven");
            break;
            case 2:printf("Twelve");
            break;
            case 3:printf("Thirteen");
            break;
            case 4:printf("Fourteen");
            break;
            case 5:printf("Fifteen");
            break;
            case 6:printf("Sixteen");
            break;
            case 7:printf("Seventeen");
            break;
            case 8:printf("Eighteen");
            break;
            default:printf("Ninteen");
            break;
        }
    }
    if(rem>1)
    {
        if(rem1==0)
        {
            switch(rem)
            {
                case 2:printf("Twenty");
                break;
                case 3:printf("Thirty");
                break;
                case 4:printf("Forty");
                break;
                case 5:printf("Fifty");
                break;
                case 6:printf("Sixty");
                break;
                case 7:printf("Seventy");
                break;
                case 8:printf("Eighty");
                break;
                default:printf("Ninety");
                break;
            }
        }
        else
        {
            switch(rem)
            {
                case 2:printf("Twenty");
                break;
                case 3:printf("Thirty");
                break;
                case 4:printf("Forty");
                break;
                case 5:printf("Fifty");
                break;
                case 6:printf("Sixty");
                break;
                case 7:printf("Seventy");
                break;
                case 8:printf("Eighty");
                break;
                default:printf("Ninety");
                break;
            }
            printf(" ");
            switch(rem1)
            {
        case 0:printf("");
        break;
        case 1:printf("One");
        break;
        case 2:printf("Two");
        break;
        case 3:printf("Three");
        break;
        case 4:printf("Four");
        break;
        case 5:printf("Five");
        break;
        case 6:printf("Six");
        break;
        case 7:printf("Seven");
        break;
        case 8:printf("Eight");
        break;
        default:printf("Nine");
        break;
            }
        }
    }
        if(i-j==3)
        {
            printf(" Million");
        }
        if(i-j==2&&c[j]!=0)
        {
            printf(" Thousand");
        }
    printf(" ");
    }
    printf("\n\n");
}
