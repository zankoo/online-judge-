#include <stdio.h>
int main(void)
{
    int score;
    scanf("%d", &score);
    if (score >= 90 && score <= 100)
    {
        printf("优\n");
    }
    if (score >= 80 && score <= 89)
    {
        printf("良\n");
    }
    if (score >= 70 && score <= 79)
    {
        printf("中\n");
    }
    if (score >= 60 && score <= 69)
    {
        printf("及格\n");
    }
    if (score <= 60)
    {
        printf("不及格\n");
    }
    return 0;
}