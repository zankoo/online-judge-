#include<stdio.h>

int main(void)
{
    int matrix[100][100] = {0};
    int line;
    scanf("%d", &line);
    for(size_t i = 0; i < line; i++)
    {
        for(size_t j = 0; j < line; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(size_t i = 0; i < line; i++)
    {
        size_t j;
        for(j = 0; j < line-1; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("%d\n", matrix[j][i]);
    }
    return 0;
}
