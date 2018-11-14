#include <stdio.h>
int main(void)
{
    int a, b, c;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (b == 2)
        {
            if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
                c = 29;
            else
                c = 28;
        }
        else
        {
            if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
                c = 31;
            else
                c = 30;
        }
        printf("%d\n", c);
    }
    return 0;
}