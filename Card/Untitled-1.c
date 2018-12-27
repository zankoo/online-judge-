#include <stdio.h>
#include <string.h>

int main()
{
    char numberN[1500], numberM[1500];
    scanf("%s %s", numberN, numberM);
    int n = strlen(numberN), m = strlen(numberM);
    int a[3], b[3];
    int i, j;
    for (i = 0, j = n - 1; i < n; i++, j--)
    {
        a[i] = numberN[j] - '0';
    }
    for (i = 0, j = m - 1; i < m; i++, j--)
    {
        b[i] = numberM[j] - '0';
    }
    int c[3000];
    for (i = 0; i < 3000; i++)
    {
        c[i] = 0;
    }

    for (i = 0; i < 3000; i++)
    {
        c[i] = (a[i] + b[i]) % 10 + c[i]; //对最低位2个数相加，得到2位数的个位数值。

        c[i + 1] = (a[i] + b[i]) / 10; //对最低位2个数相加，若大于10，进位。
    }

    for (j = 2999; j > 0; j--)
    {
        if (c[j] != 0)
            break;
    }
    for (i = j; i >= 0; i--)
    {
        printf("%d", c[i]);
    }
    printf("\n");
    return 0;
}