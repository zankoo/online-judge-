//TSOJ 1031 三角形的面积
#include <math.h>
#include <stdio.h>
int main(void)
{
    int a, b, c;
    double s, p;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a + b > c && b + c > a && a + c > b)
        {
            p = (a + b + c) / 2.0;
            s = sqrt(p * (p - a) * (p - b) * (p - c));
            printf("%.2lf\n", s);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}