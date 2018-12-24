#include <stdio.h>

int main(void)
{
    int num_men, turn, count = 0, num;
    int men[10000];
    while (scanf("%d %d", &num_men, &turn) != EOF)
    {
        num = num_men;
        for (int i = 0; i < num_men; i++)
        {
            men[i] = 1;
        }
        for (int j = 0; j < num_men; j++, j %= num_men)
        {
            if (men[j] == 0)
            {
                if (num == 0)
                {
                    printf("\n");
                    break;
                }
                continue;
            }
            count += 1;
            if (count == turn)
            {
                if (num == 1)
                {
                    num--;
                    printf("%d", j + 1);
                }
                else
                {
                    num--;
                    printf("%d ", j + 1);
                }
                men[j] = 0;
                count = 0;
            }
        }
    }
    return 0;
}
