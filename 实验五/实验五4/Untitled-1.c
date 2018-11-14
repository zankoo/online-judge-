#include <stdio.h>
float fac(float);
float com(float,float);
int main(void)
{
    float line_num = 1,num= 0,line = 10;
    printf("How many lines you want to print?\n");
    scanf("%f",&line);
    printf("     1\n");
    while(line_num <= line-1)
    {
        while(num <= line_num)
        {
            printf("%6.0f ",com(num,line_num));
            num++;
        }
        printf("\n");
        num = 0;
        line_num++;
    }
    getchar();
    getchar();
    return 0;
}
float fac(float a)
{
    float b;
    if (a == 0)
        b = 1;
    else
        b = fac(a - 1) * a;
    return b;
}
float com(float a,float b)
{
    float c;
    if (a != 0)
        c = fac(b)/(fac(a) * fac(b-a));
    else
        c = 1;
    return c;
}