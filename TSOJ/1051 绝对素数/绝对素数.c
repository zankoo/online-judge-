//TSOJ 1051 绝对素数

#include <stdio.h>
int turn(int);
int main(void)
{
    unsigned long num;
    unsigned long div;
    int isPrime;
    while (scanf("%lu", &num) != EOF && num != 1)
    {
        for (div = 2, isPrime = 1; (div * div) <= num; div++)
        {
            if (num % div == 0 && turn(num) % div == 0)
                isPrime = 0;
        }
        if (isPrime == 1)
            printf("1\n");
        else
            printf("0");
    }
    return 0;
}

int turn(int a)
{
    int b, c = 0;
    while (a != 0)
    {
        b = a % 10;
        a /= 10;
        c = (c + b) * 10;
    }
    return c / 10;
}