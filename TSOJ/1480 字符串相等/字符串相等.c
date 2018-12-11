//TSOJ 1480 字符串相等

#include <stdio.h>
#include <string.h>

void remove_block(char *pStr)
{
    {
        char *pTmp = pStr;
        while (*pStr != '\0')
        {
            if (*pStr != ' ')
            {
                *pTmp++ = *pStr;
            }
            ++pStr;
        }
        *pTmp = '\0';
    }
}

void A_to_a(char *a)
{
    int count = strlen(a);
    for (int i = 0; i < count; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] - ('A' - 'a');
        }
    }
}

int main(void)
{
    char a[1000], b[1000];
    int count;
    scanf("%d", &count);
    getchar();
    for (int i = 0; i < count; i++)
    {
        gets(a);
        gets(b);
        remove_block(a);
        remove_block(b);
        A_to_a(a);
        A_to_a(b);
        if(strcmp(a,b)==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
