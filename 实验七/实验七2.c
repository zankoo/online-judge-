#include <stdio.h>

void swap(int *, int *);
void sort(int a[], int);

int main()
{
    int list[] = {456, 564, 64, 996, 65, 45, 46, 4};
    int n = sizeof(list) / sizeof(list[0]);
    sort(list, n);
    for (int i = 0; i < n; ++i)
        printf("%d ", list[i]);
}

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void sort(int list[], int n)
{
    for (int j = 0; j < n - 1; ++j)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (list[i] > list[i + 1])
                swap(&list[i], &list[i + 1]);
        }
    }
}