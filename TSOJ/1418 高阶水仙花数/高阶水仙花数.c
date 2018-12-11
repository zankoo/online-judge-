//TSOJ 1418 高阶水仙花数

#include <math.h>
#include <stdio.h>

long long int water(long long int);

int main(void)
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        long long int a;
        for (a = pow(10, num - 1); a < pow(10, num); a++)
        {
            if (a == water(a))
                printf("%lld\n", a);
        }
    }
    return 0;
}

long long int water(long long int a)
{
    long long int sum = 0, count, b;
    b = a;
    for (count = 0; b != 0; count++)
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
