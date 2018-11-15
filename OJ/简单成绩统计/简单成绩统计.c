#include <stdio.h>

double average(int a[], int);
int max(int a[], int);
int min(int a[], int);

int main(void)
{
    int score[1000] = {0};
    int score_, num = 0;
    while (1)
    {
        for (int i = 0; i <= 999; i++)
        {
            scanf("%d", &score_);
            if (score_ == -1)
            {
                num++;
                break;
            }
            else
            {
                num++;
                score[i] = score_;
            }
        }
        num--;
        printf("%d,%.2lf,%d,%d\n", num, average(score, num), max(score, num), min(score, num));
        for (int i = 0; i <= num; i++)
            score[i] = 0;
        num = 0;
    }
}

double average(int a[], int b)
{
    int sum = 0;
    double average;
    for (int i = 0; i <= b - 1; i++)
    {
        sum += a[i];
    }
    average = (sum * 1.0) / (b * 1.0);
    return average;
}

int max(int a[], int b)
{
    int max = a[0];
    for (int i = 0; i <= b - 2; i++)
    {
        if (a[i] < a[i + 1])
            max = a[i + 1];
    }
    return max;
}

int min(int a[], int b)
{
    int min = a[0];
    for (int i = 0; i <= b - 2; i++)
    {
        if (a[i] > a[i + 1])
            min = a[i + 1];
    }
    return min;
}