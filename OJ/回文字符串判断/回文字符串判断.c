#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[10000] = {0};
    int i, b, c;
    while (gets(a) != 0)
    {
        b = strlen(a);
        for (i = 0, c = b - 1; i < c; i++, c--)
        {
            if (a[i] != a[c])
            {
                break;
            }
        }
        if (i >= c)
            printf("YES\n");
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}