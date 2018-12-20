//TSOJ 1242 武松打虎

#include <stdio.h>
int main(void)
{
    int tiger[50000];
    int num_tigers, power_wusong;
    while (scanf("%d %d", &num_tigers, &power_wusong) != EOF)
    {
        for (int j = 0; j < num_tigers; j++)
        {
            scanf("%d", &tiger[j]);
        }
        int i;
        for (i = 0; i < num_tigers && power_wusong > 0; i++)
        {
            power_wusong -= tiger[i];
        }
        printf("%d\n",i);
    }
    return 0;
}
