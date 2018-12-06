#include <stdio.h>

void swap(int *a, int n)
{
	for (int i = 0, j = n - 1; i <= j; i++, j--)
	{
		int t;
		t = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = t;
	}
}

int main(void)
{
	int num[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
	swap(num, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}
	getchar();
	return 0;
}
