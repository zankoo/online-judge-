#include <stdio.h>
int main(void)
{
	int b;
	int a;
	scanf("%d",&a);
	while(a != 0)
	{
		b = a % 10;
		printf("%d",b);
		a /= 10;
	}
	getchar();
	getchar();
	return 0;
}