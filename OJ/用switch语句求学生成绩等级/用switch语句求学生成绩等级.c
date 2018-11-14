#include <stdio.h>
int main(void)
{
    int score;
    while (scanf("%d", &score) != EOF)
    {
        if(score==-1)
            break;
        switch (score / 10)
        {
        case 0:
            printf("不及格\n");
            break;
        case 1:
            printf("不及格\n");
            break;
        case 2:
            printf("不及格\n");
            break;
        case 3:
            printf("不及格\n");
            break;
        case 4:
            printf("不及格\n");
            break;
        case 5:
            printf("不及格\n");
            break;
        case 6:
            printf("及格\n");
            break;
        case 7:
            printf("中\n");
            break;
        case 8:
            printf("良\n");
            break;
        case 9:
            printf("优\n");
            break;
        case 10:
            printf("优\n");
            break;
        }
    }
    return 0;
}