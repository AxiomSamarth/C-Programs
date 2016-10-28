#include<stdio.h>
int MAX_NUM=1000000;
int chainLength[1000000]={0};
long long int num;
int i,count,starting_num,new_count;
int main()
{
    count=0;
    for(i=1;i<MAX_NUM;i++)
    {
        num=i;
        new_count=1;
        while(num!=1)
        {
            new_count++;
            if(num%2==0)
            {
                num=num/2;
            }
            else
            {
                num=(3*num)+1;
            }
            if(num>=MAX_NUM)
            continue;

            if(num<i)
            {


                new_count+=(chainLength[num]-1);
                break;
            }
        }

        chainLength[i]=new_count;//memoizing the chain lenght
        if(count<new_count)
        {
            count=new_count;
            starting_num=i;
        }
    }
    printf("%d",starting_num);
    return 0;
}


