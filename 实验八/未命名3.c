#include <stdio.h>

int main()
{
	int i, *p, s = 0, a[5] = {5, 6, 7, 8, 9};
	p = a;
	for (i = 0; i < 5; i++, p++)
		s += *p;
	printf("\n s=%d", s);
	getchar();
	return 0;
}
