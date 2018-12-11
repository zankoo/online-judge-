//TSOJ 1530 寻找乘积和数

#include <stdio.h>
int sum1(int);
int sum2(int);

int main(void)
{
    int a, b;
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        if (sum1(b) == sum2(b))
            printf("%d\n", b);
    }
    getchar();
    getchar();
    return 0;
}

int sum1(int a)
{
    int b, c = 1;
    while (a != 0)
    {
        b = a % 10;
        c *= b;
        a /= 10;
    }
    return c;
}

int sum2(int a)
{
    int b, c = 0;
    while (a != 0)
    {
        b = a % 10;
        c += b;
        a /= 10;
    }
    return c;
}
