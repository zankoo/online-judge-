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

int num = 0;

int main(void)
{
    char input[60];
    char output[60];
    gets(input);
    int n = strlen(input);
    Reverse(input, n);
    for (size_t i = 0; i < n - 1 && input[i] == '0'; i++)
    {
        if (input[i + 1] != '0' && input[0] == '0')
        {
            num = i + 1;
            break;
        }
    }

    for (size_t j = num, a = 0; j < n; j++, a++)
    {
        output[a] = input[num];
    }

    for (size_t k = 0; k < n - num; k++)
    {
        printf("%c", output[k]);
    }

    return 0;
}
