#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[1000][1000], temp[1000];
    int num;
    scanf("%d", &num);
    getchar();
    for (int i = 0; i < num; i++)
    {
        gets(a[i]);
    }
    for (int i = 0; i < num; i++)
    {
        for (int i = 0; i < num-1; i++)
        {
            for (int j=i+1; j<num ; ++j)
            {
                if (strcmp(a[i], a[j]) > 0)
                {
                    strcpy(temp, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], temp);
                }
            }
        }
    }
    for (int i = 0; i < num; i += 1)
    {
        printf("%s\n", a[i]);
    }
    return 0;
}
