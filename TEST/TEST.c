#include <stdio.h>
#include <string.h>

typedef struct
{
    char ISBN[20];
    int num;
    double price;
} data;
data inf[2];
double ave, total = 0.0;
int number = 0;
void input()
{
    for (int i = 0; i < 2; i++)
    {
        scanf("%s %d %lf", inf[i].ISBN, &inf[i].num, &inf[i].price);
    }
}
void compute()
{
    for (int i = 0; i < 2; i++)
    {
        total += inf[i].num * inf[i].price;
    }
    ave = (total * 1.0) / (inf[0].num + inf[1].num);
    for (int i = 0; i < 2; i++)
    {
        number += inf[i].num;
    }
}
void output()
{
    printf("%s %d %.2lf %.2lf\n", inf[0].ISBN, number, total, ave);
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
