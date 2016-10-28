#include<stdio.h>
int POW_SIZE =1000;
int main(){
    int i,j,k,sum,carry,count,t_sum,init_digits,no_digits;
    int num[1000],t_num[1000];
    num[0]=1;
    count=1;
    init_digits=1;
    while(count<=POW_SIZE){
        no_digits=init_digits;
        carry=0;
        j=0;
        if(num[no_digits-1]>=5)no_digits++;
        for(i=0;i<no_digits;i++){
            t_sum=num[i]+num[i]+carry;
            if(t_sum<10){
                t_num[j]=t_sum%10;
                carry=0;
            }
            if(t_sum>=10){
                t_num[j]=t_sum%10;
                t_sum=t_sum/10;
                carry=t_sum%10;
            }
            j++;
            if(j==no_digits)break;
        }
        init_digits=no_digits;
        sum=0;
        for(k=0;k<no_digits;k++){
            num[k]=t_num[k];
            sum=sum+num[k];
        }
        count++;
    }
    printf("%d",sum);
    return 0;
}
