#include <stdio.h>
int main(void)
{
	long a = 101,b = 2,c = 1,d = 0;
	while(a <= 200)
	{
		while(c != 0 && b < a)
		{
			c = a % b;
			b++;
		}
		if(c != 0)
		{
			d++;
		}
		a++;
		b = 2;
		c = 1;
	}
	printf("%ld",d);
	getchar();
	return 0;
}