#include <math.h>
#include <stdio.h>

long long int water(long long int);

int main(void)
{
    long long int a;
    for (a = 100; a <= 1000; a++)
    {
        if (a == water(a))
            printf("%lld\n", a);
    }
    return 0;
}

long long int water(long long int a)
{
    long long int sum = 0,count,b;
    b = a;
    for (count = 0; b != 0;count++)
    {
        b /= 10;
    }
    while (a != 0)
    {
        sum += pow((a % 10), count);
        a /= 10;
    }
    return sum;
}
//旧版本如下 很烂

/*
#include <math.h>
#include <stdio.h>
long long int main(void)
{
    long long int a = 100, b, c, d;
    while (a < 1000)
    {
        b = a % 10;
        c = (a / 10) % 10;
        d = (a / 100) % 10;
        if (a == pow(b, 3) + pow(c, 3) + pow(d, 3))
            prlong long intf("%d\n", a);
        a++;
    }
    return 0;
}
*/