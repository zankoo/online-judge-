#include <stdio.h>

void relist(int a[], int b[])
{
    for (int i = 0; i < 54; i++)
    {
        if ((i + 1) % 2 == 0)
            b[i] = a[25 + (i + 1) / 2 + 1];
        else
            b[i] = a[(i + 2) / 2 - 1];
    }
}

int main(void)
{
    int list[54], relisted_list[54];
    int num;
    for (int i = 0; i < 54; i++)
    {
        list[i] = i + 1;
    }
    while (scanf("%d", &num) != EOF)
    {
        for (int j = 0; j < num; j++)
        {
            relist(list, relisted_list);
            for (int k = 0; k < 54; k++)
            {
                list[k] = relisted_list[k];
            }
        }
        for (size_t i = 0; i < 53; i++)
        {
            printf("%d ", relisted_list[i]);
        }
        printf("%d\n", relisted_list[53]);
    }
    return 0;
}
