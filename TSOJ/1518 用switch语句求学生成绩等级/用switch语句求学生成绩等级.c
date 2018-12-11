//TSOJ 1518 用switch语句求学生成绩等级

#include <stdio.h>
int main(void)
{
    int score;
    while (scanf("%d", &score) != EOF)
    {
        if (score == -1)
            break;
        switch (score / 10)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
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
        case 10:
            printf("优\n");
            break;
        }
    }
    return 0;
}