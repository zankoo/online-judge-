#include <stdio.h>

//求数组最大值
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

//求数组和
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
    long int rooms;                               //房间数
    long int geted_books[1000];                   //拿到的书的价值数组
    scanf("%ld", &rooms);
    for (long int i = 0; i < rooms; i++)          //房间的循环
    {
        long int book_num;                        //当前房间内书的数目
        long int book[1000] = {0};                //当前房间的书的价值数组，初始化为0
        scanf("%ld", &book_num);
        for (int j = 0; j < book_num; j++)        //输入每本书价值的循环
        {
            scanf("%ld", &book[j]);
        }
        geted_books[i] = max(book, book_num);     //拿当前房间内价值最大的书
        for (int k = 0; k < book_num; k++)        //重新初始化书的价值数组，便于下个房间流程
        {
            book[k] = 0;
        }
    }
    printf("%ld\n", sum(geted_books, rooms));     //输出拿到的书的价值数组的和
    return 0;
}
