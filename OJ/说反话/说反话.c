#include <stdio.h>
#include <string.h>

void reverse(char a[],char b[])
{
    for(int i = strlen(a)-1,j=0; i >=0; i--,j++)
    {
        b[j] = a[i];
    }
    b[strlen(a)] = '\0';
}

int main(void)
{
    char a[1000];
    char re_a[1000];
    int count;
    scanf("%d", &count);
    getchar();
    for(int i = 0; i < count; i++)
    {
        gets(a);
        reverse(a, re_a);
        printf("%s\n",re_a);
    }

    return 0;
}
