#include <math.h>
#include <stdio.h>

int num(int, int);

int main(void)
{
    int a, b, sum = 0, count;
    scanf("%d %d", &a, &b);
    for (count = 1; count <= b; count++)
    {
        sum += num(a, count);
    }
    printf("%d\n", sum);
    return 0;
}

int num(int a, int b)
{
    int c, d = 0;
    for (c = 1; c <= b; c++)
        d += pow(10, c - 1) * a;
    return d;
}
