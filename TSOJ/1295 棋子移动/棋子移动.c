#include <stdio.h>

void swap(int n)
{
    if (n > 4)
    {
        printf("%d,%d-->%d,%d\n", n, n + 1, 2 * n + 1, 2 * n + 2);
        printf("%d,%d-->%d,%d\n", 2 * n - 1, 2 * n, n, n + 1);
        swap(n - 1);
    }
    else
    {
        printf("4,5-->9,10\n8,9-->4,5\n2,3-->8,9\n7,8-->2,3\n1,2-->7,8\n");
    }
}

int main(void)
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        swap(num);
    }
    return 0;
}
