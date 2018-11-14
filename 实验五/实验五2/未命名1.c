#include <stdio.h>
int main(void)
{
	long a = 101,d = 1,c = 0;
	long b;
	scanf("%ld",&a);
	while (a != 0)
	{
		b = a % 10;
		if(b % 2 == 0)
		{
			a /= 10;
			c = c + b * d;
			d *= 10;
		}
		else
		{
			a /= 10;
			continue;
		}
	}
	printf("%ld",c);
	getchar();
	getchar();
	return 0;
}