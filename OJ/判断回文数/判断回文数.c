#include <stdio.h>

int turn(int);

int main(void)
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if(a==turn(a))
            printf("Yes\n");
        else
            printf("No\n");
    }
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