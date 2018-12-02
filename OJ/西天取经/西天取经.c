#include <stdio.h>

long int max(long int a[], long int b)
{
    long int max_ = a[0];
    for (long int i = 0; i <= b - 1; i++)
    {
        if (a[i] > max_)
            max_ = a[i];
    }
    return max_;
}

long int sum(long int a[], long int b)
{
    long int sum = 0;
    for (long int i = 0; i <= b - 1; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main(void)
{
    long int cyc;
    long int get_book[1000];
    scanf("%ld", &cyc);
    for (long int i = 0; i < cyc; i++)
    {
        long int book_num;
        long int book[1000]={0};
        scanf("%ld", &book_num);
        for (long int j = 0; j < book_num; j++)
        {
            scanf("%ld", &book[j]);
        }
        get_book[i] = max(book, book_num);
        for(int k = 0; k < book_num; k++)
        {
            book[k] = 0;
        }

    }
    printf("%ld\n", sum(get_book, cyc));
    return 0;
}
