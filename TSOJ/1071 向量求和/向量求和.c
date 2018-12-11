//TSOJ 1071 向量求和

#include <stdio.h>
int main(void)
{
    int a, count, b;
    scanf("%d", &a);
    int count_1[a], count_2[a];
    for (count = 0; count <= a - 1; count++)
    {
        scanf("%d", &b);
        count_1[count] = b;
    }
    for (count = 0; count <= a - 1; count++)
    {
        scanf("%d", &b);
        count_2[count] = b;
    }
    for (count = 0; count <= a - 1; count++)
    {
        if (count != a - 1)
            printf("%d ", count_1[count] + count_2[count]);
        else
            printf("%d\n", count_1[count] + count_2[count]);
    }
    return 0;
}
