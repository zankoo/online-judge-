//TSOJ 1003 a+-*/b

#include <stdio.h>
int main(void)
{
    int a, b, d, i;
    char c;
    scanf("%d", &d);
    for (i = 1; i <= d; i++)
    {
        scanf("%d %c %d", &a, &c, &b);
        if (c == '+')
            printf("%d\n", a + b);
        if (c == '-')
            printf("%d\n", a - b);
        if (c == '*')
            printf("%d\n", a * b);
        if (c == '/')
            printf("%d\n", a / b);
    }
    return 0;
}