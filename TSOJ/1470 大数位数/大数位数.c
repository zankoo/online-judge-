//TSOJ 1470 大数位数

#include <math.h>
#include <stdio.h>

int main(void)
{
    int i, n;
    double sum = 0.0;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 2; i <= n; i++)
        {
            sum += log10(i);
        }
        if (n == 1)
            sum = 1;
        printf("%d\n", (int)ceil(sum));
        sum = 0.0;
    }
    return 0;
}