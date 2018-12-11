//TSOJ 1035 鸡兔同笼问题

#include <stdio.h>
int main(void)
{
    int heads, legs, rabbits, chickens;
    while (scanf("%d %d", &heads, &legs) != EOF)
    {
        rabbits = (legs - heads * 2) / 2;
        chickens = heads - rabbits;
        if (chickens * 2 + rabbits * 4 == legs && chickens >= 0 && rabbits >= 0)
            printf("%d %d\n", chickens, rabbits);
        else
            printf("-1 -1\n");
    }
    return 0;
}