//TSOJ 1243 青奥入场

#include <stdio.h>
#include <string.h>

struct info
{
    int num;
    char country[20];
    int members;
    char continent[20];
};

void sort(struct info infs[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            struct info temp;
            if (strcmp(infs[j].country, infs[j + 1].country) > 0)
            {
                temp = infs[j + 1];
                infs[j + 1] = infs[j];
                infs[j] = temp;
            }
        }
    }
}

int main(void)
{
    struct info infs[100];
    int count;
    while (scanf("%d", &count) != EOF)
    {
        for (int i = 0; i < count; i++)
        {
            scanf("%d %s %d %s", &infs[i].num, infs[i].country, &infs[i].members, infs[i].continent);
        }
        sort(infs, count);
        for (int i = 0; i < count; i++)
        {
            if (strcmp(infs[i].country, "China") != 0)
                printf("%d %s %d %s\n", infs[i].num, infs[i].country, infs[i].members, infs[i].continent);
        }
        for (int i = 0; i < count; i++)
        {
            if (strcmp(infs[i].country, "China") == 0)
                printf("%d %s %d %s\n", infs[i].num, infs[i].country, infs[i].members, infs[i].continent);
        }
    }
    return 0;
}
