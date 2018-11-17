#include <math.h>
#include <stdio.h>

double plus(double);
double judge(double, double, double);
double root1(double, double, double);
double root2(double, double, double);

int main(void)
{
    double a, b, c;
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        if (plus(a) == 1)
        {
            printf("不是一元二次方程\n");
        }
        else
        {
            root1(a, b, c);
            root2(a, b, c);
        }
    }
    return 0;
}

double plus(double a)
{
    if (a == 0)
        return 1;
    else
        return 0;
}

double judge(double a, double b, double c)
{
    double d;
    d = b * b - 4.0 * a * c;
    return d;
}

double root1(double a, double b, double c)
{
    double d;
    if (judge(a, b, c) >= 0)
    {
        d = (-b + sqrt(judge(a, b, c))) / (2.0 * a);
        printf("%.2lf ", d);
    }
    else
    {
        printf("%.2lf+%.2fi ", (-b) / 2.0 * a, sqrt(-judge(a, b, c)) / (2.0 * a));
    }
    return 0;
}

double root2(double a, double b, double c)
{
    double d;
    if (judge(a, b, c) >= 0)
    {
        d = (-b - sqrt(judge(a, b, c))) / (2.0 * a);
        if (d == (-0))
            printf("0.00\n");
        else
        {
            printf("%.2lf\n", d);
        }
    }
    else
    {
        printf("%.2lf-%.2lfi\n", (-b) / 2.0 * a,sqrt(-judge(a, b, c)) / (2.0 * a));
    }
    return 0;
}