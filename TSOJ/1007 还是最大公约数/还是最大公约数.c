//TSOJ 1007 还是最大公约数

#include <stdio.h>

int min(int x, int y)
{
    int z;
    if (x < y)
        z = x;
    else
        z = y;
    return z;
}

int max_(int a, int b)
{
    int f, c = 0;
    f = min(a, b);
    while (c == 0)
    {
        if (a % f == 0 && b % f == 0)
            c = f;
        f -= 1;
    }
    return c;
}

int main(void)
{
    int a, b, c, g, i;
    scanf("%d", &g);
    for (i = 1; i <= g; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", max_(max_(a, b), c));
    }
    return 0;
}
