#include <stdio.h>

void relist(int a[], int b[])
{
    for (int i = 0; i < 54; i++)
    {
        if ((i + 1) % 2 == 0)
            b[i] = a[25 + (i + 1) / 2];
        else
            b[i] = a[(i + 1) / 2 - 1];
    }
}

int main(void)
{
    int list[54], relisted_list[54];
    for (int i = 0; i < 54; i++)
    {
        list[i] = i + 1;
    }
    relist(list, relisted_list);
    for(size_t i = 0; i < 54; i++)
    {
        printf("%d ", relisted_list[i]);
    }

    return 0;
}
