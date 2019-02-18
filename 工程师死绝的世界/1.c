#include <stdio.h>
int main(void)
{
    int num, number, count = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &number);
        if (number > 5)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
