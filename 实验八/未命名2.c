#include <stdio.h>

int main()
{
    int a = 5, b = 5, *p;
    p = &a;
    printf("%d ,%ud\n", a, p);
    *p = 8;
    printf("%d ,%ud\n", a, p);
    p = &b;
    printf("%d ,%ud\n", a, p);
    b = 10;
    printf("%d ,%ud\n", a, p);
    getchar();
    return 0;
}
