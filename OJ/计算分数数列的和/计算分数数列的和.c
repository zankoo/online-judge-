#include <math.h>
#include <stdio.h>

double Fibonacci(int);

int main(void)
{
    double sum = 0;
    int input, count;
    scanf("%d", &input);
    for (count = 1; count <= input; count++)
    {
        sum += pow(-1, count - 1) * (Fibonacci(count) / Fibonacci(count - 1));
    }
    printf("%.4lf", sum);
    return 0;
}

double Fibonacci(int a)
{
    int num_one = 1, num_two = 1, b, count;
    for (count = 1; count <= a; count++)
    {
        b = num_one;
        num_one = num_one + num_two;
        num_two = b;
    }
    return num_one;
}