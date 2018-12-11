//TSOJ 1515 判断两个数的大小关系

#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("x > y");
    else if (a == b)
        printf("x==y");
    else
        printf("x<y");
    return 0;
}
