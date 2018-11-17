#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[1000];
    int num;
    scanf("%d", &num);
    for (int i = 0; gets(a) != 0 && i <= num - 1;i++)
    {
        printf("%lld\n", strlen(a));
    }
    return 0;
}
