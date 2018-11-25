#include <stdio.h>
int main(void)
{
    int a, count, num_one = 1, num_two = 1, b, d = 3;
    scanf("%d", &a);
    printf("%12d%12d", num_one, num_two);
    for (count = 1; count <= a - 2; count++)
    {
        b = num_one;
        num_one = num_one + num_two;
        num_two = b;
        printf("%12d", num_one);
        d++;
        if (d == 5)
        {
            printf("\n");
            d = 1;
        }
    }
    return 0;
}
