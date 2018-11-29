#include <stdio.h>

double average(int a[], int);
int max_(int a[], int);
int min(int a[], int);

int main(void)
{
    int score[1000] = {0};
    int score_, num = 0;
    for (int i = 0; i <= 999; i++)
    {
        scanf("%d", &score_);
        if (score_ == -1)
        {
            break;
        }
        else
        {
            num++;
            score[i] = score_;
        }
    }
    printf("%d,%.2lf,%d,%d\n", num, average(score, num), max_(score, num), min(score, num));
    for (int i = 0; i <= num; i++)
        score[i] = 0;
    num = 0;
    return 0;
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
    int max_ = a[0];
    for (int i = 0; i <= b - 1; i++)
    {
        if (a[i] > max_)
            max_ = a[i];
    }
    return max_;
}

int min(int a[], int b)
{
    int min_ = a[0];
    for (int i = 0; i <= b - 1; i++)
    {
        if (a[i] < min_)
            min_ = a[i];
    }
    return min_;
}