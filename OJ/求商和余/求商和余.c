#include <stdio.h>
int main(void)
{
    int a, b,c,d;
    scanf("%d %d", &a, &b);
    d = a % b;
    c = a / b;
    printf("%d %d\n",c,d);
    return 0;
}