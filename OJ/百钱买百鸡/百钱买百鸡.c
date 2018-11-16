#include <stdio.h>
int main(void)
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        for (int i = 1; i <= num; i++)
        {
            int count;
            for (count = 1; count <= num - i - 1; count++)
            {
                if (i * 5.0 + count * 3.0 + (num - count - i) * 0.5 == num)
                    printf("%d %d %d\n", i, count, num - i - count);
            }
        }
    }
    return 0;
}
