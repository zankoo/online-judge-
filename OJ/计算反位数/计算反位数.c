#include <stdio.h>

int turn(int);

int main(void)
{
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%d\n%d\n", turn(a), turn(b));
    return 0;
}

int turn(int a)
{
    int b, c = 0;
    while (a != 0)
    {
        b = a % 10;
        a /= 10;
        c = (c+b)*10;
    }
    return c/10;
}