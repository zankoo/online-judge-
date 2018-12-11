//TSOJ 1080 水仙花数

#include <math.h>
#include <stdio.h>
int main(void)
{
    int a = 100, b, c, d;
    while (a < 1000)
    {
        b = a % 10;
        c = (a / 10) % 10;
        d = (a / 100) % 10;
        if (a == pow(b, 3) + pow(c, 3) + pow(d, 3))
            printf("%d\n", a);
        a++;
    }
    return 0;
}