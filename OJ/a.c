#include <stdio.h>

void relist(int a[], int b[])
{
    for (int i = 0; i < 54; i++)
    {
        if ((i + 1) % 2 == 0)
            b[i] = a[26 + (i + 1) / 2];
        else
            b[i] = a[(i + 2) / 2 - 1];
    }
}

int main(void)
{
    int list[54], relisted_list[54];
    int count;
    for (int i = 0; i < 54; i++)
    {
        list[i] = i + 1;
    }
    scanf("%d", &count);
    for (int k = 0; k < count; k++)
    {
        relist(list, relisted_list);
        for (int j = 0; j < 54; j++)
        {
            list[j] = relisted_list[j];
        }
    }
    for(int m = 0; m < 53; m++)
    {
        printf("%d ", relisted_list[m]);
    }
    printf("%d", relisted_list[53]);
    return 0;
}
