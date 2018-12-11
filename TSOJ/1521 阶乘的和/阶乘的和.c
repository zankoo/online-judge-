//TSOJ 1521 阶乘的和

#include <stdio.h>
int fac(int);
int main(void)
{
    int a, b, sum = 0;
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        sum = fac(b) + sum;
    }
    printf("%d", sum);
    getchar();
    getchar();
    return 0;
}

int fac(int a)
{
    int b;
    if (a == 0)
        b = 1;
    else
        b = fac(a - 1) * a;
    return b;
}
