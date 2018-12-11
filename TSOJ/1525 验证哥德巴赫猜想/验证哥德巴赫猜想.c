//TSOJ 1525 验证哥德巴赫猜想

#include <stdio.h>
int judge(unsigned long);
int main(void)
{
  int input, count;
  scanf("%d", &input);
  for (count = 2; count <= input; count++)
  {
    if (judge(count) == 1 && judge(input - count) == 1)
    {
      printf("%d=%d+%d\n", input, count, input - count);
      break;
    }
  }
  return 0;
}

int judge(unsigned long num)
{
  unsigned long div;
  int isPrime;
  for (div = 2, isPrime = 1; (div * div) <= num; div++)
  {
    if (num % div == 0)
      isPrime = 0;
  }
  return isPrime;
}