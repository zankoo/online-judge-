#include <math.h>
#include <stdio.h>

double plus(double);
double judge(double, double, double);
double root1(double, double, double);
double root2(double, double, double);
double output(double, double, double);

int main(void)
{
    double a, b, c;
    double d;
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        if (plus(a) == 1)
        {
            d = -c / b;
            printf("%lf\n", d);
        }
        else
        {
            if (judge(a, b, c) >= 0)
                output(a, b, c);
            else
                printf("方程无解\n");
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
    int d;
    d = b * b - 4 * a * c;
    return d;
}

double root1(double a, double b, double c)
{
    double d;
    d = (-b + sqrt(judge(a, b, c))) / (2 * a);
    return d;
}

double root2(double a, double b, double c)
{
    double d;
    d = (-b - sqrt(judge(a, b, c))) / (2 * a);
    return d;
}
double output(double a, double b, double c)
{
    printf("第一个根为：%.2lf 第二个根为：%.2lf\n", root1(a, b, c), root2(a, b, c));
}
