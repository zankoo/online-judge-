#include <math.h>
#include <stdio.h>
int main()
{
    int a, b, c;
    double area, p;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a + b > c && b + c > a && a + c > b)
        {
            p = (a + b + c) / 2.0;
            area = sqrt(p * (p - a) * (p - b) * (p - c));
            printf("%.2lf\n", area);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}