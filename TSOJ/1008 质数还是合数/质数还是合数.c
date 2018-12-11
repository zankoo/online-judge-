//TSOJ 1008 质数还是合数

#include<stdio.h>
int main(void)
{
    unsigned long num;
    unsigned long div;
    int isPrime;
    while(scanf("%lu", &num) == 1 && num != 1)
    {
        for(div = 2, isPrime = 1;(div * div) <= num; div++){
            if(num % div == 0)
                isPrime = 0;
        }
        if(isPrime == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
