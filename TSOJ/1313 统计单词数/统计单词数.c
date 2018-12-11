//TSOJ 1313 统计单词数

#include <stdio.h>
#include <string.h>

int main(void)
{
    char words[10000];
    while (gets(words) != NULL)
    {
        int num_words = 0;
        for (int i = 0; i < strlen(words) - 1; i++)
        {
            if (words[i] == ' ' && words[i + 1] != ' ')
                num_words += 1;
        }
        printf("%d\n", num_words + 1);
    }
    return 0;
}
