#include<stdio.h>
#include<stdlib.h>
main()
{
    long int a[20][50]; long int i,prod=1,big=0,j,k;
    for(i=0;i<20;i++)
    {
        printf("\n\nNext:");
        for(j=0;j<10;j++)
        {
            scanf("%ld",&a[i][j]);
        }
    }
    for(i=0;i<1;i++)
    {
        for(j=0;j<(50-13);j++)
        {
            for(k=0;k<13;k++)
            {
                prod*=a[i][j+k];
            }
            printf("\n%ld",prod);
        }
    }
}

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int index,k,string_length,Product,New_product,i,j;
int number[1000]={0};
char string_digit[50];
FILE *f_read;
int main(){
    Product=1;
    index=0;
    f_read=fopen("inputpe08.txt","r");
    while (fscanf(f_read,"%s",string_digit)==1){
        string_length=strlen(string_digit);
        for(k=0;k<string_length;k++)    {   number[index]=string_digit[k]-48;index++;   }
    }
    fclose(f_read);
    for(i=0;i<=995;i++){
        New_product=1;
        for(j=i;j<=i+4;j++) New_product=New_product*number[j];
        if(New_product>=Product)  Product=New_product;
    }
    printf("%d",Product);
    return 0;
} */
