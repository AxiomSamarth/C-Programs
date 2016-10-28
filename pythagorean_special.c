#include<stdio.h>
#include<stdlib.h>
main()
{
    printf("\n\nThe program prints the product of a,b,c the pythagorean triplets, whose sum is 1000 and is only one of its kind...!!\n\n");
    int a,b,c;
    for(c=0;c<=1000;c++)
    {
        for(b=0;b<c;b++)
        {
            for(a=0;a<b;a++)
            {
                if(a+b+c==1000&&a*a+b*b==c*c&&(a<b&&a<c&&b<c))
                {
                    printf("\n\ta=%d\tb=%d\tc=%d\n",a,b,c);
                    printf("\n\nThe product of this pythagorean triplet is %d.\n\n",a*b*c);
                    return 0;
                }
            }
        }
    }
}
