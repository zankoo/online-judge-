//TSOJ 1533 字符串中星号的处理

#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[10000];
    while (scanf("%s", a) != EOF)
    {
        int i;
        for (i = 0; i < strlen(a); i++)
        {
            if (a[i] == '*')
                printf("*");
            else
                break;
        }
        for (i = 0; i < strlen(a); i++)
        {
            if (a[i] != '*')
                printf("%c", a[i]);
        }
        printf("\n");
    }
    return 0;
}
