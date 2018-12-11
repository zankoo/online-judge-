//TSOJ 1516 判断三角形的形状

#include <stdio.h>
int main(void)
{
    int a, b, c, d, e;
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        scanf("%d %d %d", &c, &d, &e);
        if (c + d > e && c + e > d && d + e > c && c > 0 && d > 0 && e > 0)
        {
            if (c == d && c == e && d == e)
                printf("Regular Triangle\n");
            else
            {
                if (c == d || c == e || d == e)
                    printf("Isosceles Triangle\n");
                else
                    printf("Triangle\n");
            }
        }
        else
            printf("Not Triangle\n");
    }
    return 0;
}