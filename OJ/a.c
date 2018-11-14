#include <stdio.h>
int main(void)
{
    int a, i, count, flag, sum = 0;
    while (scanf("%d", &a) != EOF)
    {
        for (i = 2; i < a; i++)
        {
            for (count = 2, flag = 0; count * count <= i; count++)
            {
                if (i % count == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                sum += i;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
