#include <stdio.h>

int main(void)
{
    int list[3][5];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            printf("%p ", &list[i][j]);
        }
        printf("\n");
    }
    return 0;
}