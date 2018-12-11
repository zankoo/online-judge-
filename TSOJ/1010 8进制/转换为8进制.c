//TSOJ 1010 8进制

#include <stdio.h>
int main(void)
{
    int a, m, n;
    scanf("%d", &m);
    for (n = 1; n <= m; n++)
    {
        scanf("%d", &a);
        printf("%o\n", a);
    }
    return 0;
}
