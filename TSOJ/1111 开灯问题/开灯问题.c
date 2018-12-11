//TSOJ 1111 开灯问题

#include <stdio.h>

void switch_(int *a)
{
    if (*a == 1)
        *a = 0;
    else
        *a = 1;
}

int main(void)
{
    int list[100] = {0};
    int num_light, num_men;
    while (scanf("%d %d", &num_light, &num_men) != EOF)
    {
        int i;
        for (i = 1; i <= num_men; i++)
        {
            for (int j = 0; j < num_light; j++)
            {
                if ((j + 1) % i == 0)
                    switch_(&list[j]);
            }
        }
        for (int k = 0; k < num_light; k++)
        {
            if(list[k]==1)
                printf("%d\n", k + 1);
        }
        for (int l = 0; l < num_light; l++)
            list[l] = 0;
    }
    return 0;
}
