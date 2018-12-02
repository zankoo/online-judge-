#include <stdio.h>

long int fac(long int a)
{
    long int b;
    if (a == 0)
        b = 1;
    else
        b = fac(a - 1) * a;
    return b;
}

long int num(long int a)
{
    long int count;
    for (count = 0; a != 0; count++)
    {
        a /= 10;
    }
    return count;
}

int main(void)
{
    long int num_;
    while (scanf("%ld", &num_) != EOF)
    {
        printf("%ld\n", num(fac(num_)));
    }
    return 0;
}
