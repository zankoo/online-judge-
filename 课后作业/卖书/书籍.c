#include <stdio.h>
#include <string.h>
#define N 20

typedef struct
{
    char ISBN[N];
    int num;
    double price;
} data;
data info[2];
double ave, total = 0.0;
int number = 0;
void input()
{
    for (int i = 0; i < 2; i++)
    {
        scanf("%s %d %lf", info[i].ISBN, &info[i].num, &info[i].price);
    }
}
void compute()
{
    if (strcmp(info[0].ISBN, info[1].ISBN) != 0)
        return;
    for (int i = 0; i < 2; i++)
    {
        total += info[i].num * info[i].price;
    }
    ave = (total * 1.0) / (info[0].num + info[1].num);
    for (int i = 0; i < 2; i++)
    {
        number += info[i].num;
    }
}
void output()
{
    if (strcmp(info[0].ISBN, info[1].ISBN) == 0)
        printf("%s %d %.2lf %.2lf\n", info[0].ISBN, number, total, ave);
    else
    {
        printf("%s %d %.2lf %.2lf\n", info[0].ISBN, info[0].num, info[0].price * info[0].num, info[0].price);
        printf("%s %d %.2lf %.2lf\n", info[1].ISBN, info[1].num, info[1].price * info[1].num, info[1].price);
    }
}

int main(void)
{
    input();
    compute();
    output();
    getchar();
    getchar();
    return 0;
}
