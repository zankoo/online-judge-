//TSOJ 1102 最大公约数和最小公倍数

#include <stdio.h>

int max(int x, int y)
{
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return z;
}

int min(int x, int y)
{
    int z;
    if (x < y)
        z = x;
    else
        z = y;
    return z;
}

int main(void)
{
    int a, b, c = 0, d = 0, e, f;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        e = max(a, b);
        f = min(a, b);
        while (c == 0)
        {
            if (a % f == 0 && b % f == 0)
                c = f;
            f -= 1;
        }
        while (d == 0)
        {
            if (e % a == 0 && e % b == 0)
                d = e;
            e += 1;
        }
        printf("%d\n%d\n", c, d);
        c = 0;
        d = 0;
    }
    return 0;
}
