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
            printf("������\n");
            break;
        case 6:
            printf("����\n");
            break;
        case 7:
            printf("��\n");
            break;
        case 8:
            printf("��\n");
            break;
        case 9:
        case 10:
            printf("��\n");
            break;
        }
    }
    return 0;
}