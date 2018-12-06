#include <stdio.h>
#include <string.h>

void Reverse(char *s, int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main(void)
{
    char numbers[60], minus_numbers[60];
    int num;
    while (gets(numbers) != NULL)
    {
        num = strlen(numbers);
        if (numbers[0] == '-')
        {
            for (int i = 0; i < num - 1; i++)
            {
                minus_numbers[i] = numbers[i + 1];
            }
            Reverse(minus_numbers, num - 1);
            printf("-");
            for (int j = 0; j < num - 1; j++)
            {
                printf("%d", minus_numbers[j]);
            }
        }
    }
    return 0;
}
