#include <stdio.h>
#include <string.h>
int main()
{
	char a[100], b[100];
	int n, i, j;
	while (gets(a) != NULL)
	{
		i = 0;
		while (a[i])
			i++;
		if (a[0] == '-')
		{
			j = 1;
			b[0] = '-';
			for (n = i - 1; n >= 1; n--)
				b[j++] = a[n];
			b[i] = '\0';
		}
		else
		{
			j = 0;
			for (n = i - 1; n >= 0; n++)
				b[j++] = a[n];
			b[i] = '\0';
		}
		while (b[0] == 0)
			for (j = 1; j < i + 1; j++)
				b[j - 1] = b[j];
		while (b[0] == '-' && b[1] == 0)
			for (j = 1; j < i + 1; j++)
				b[j] = b[j++];
		puts(b);
	}
	getchar();
	getchar();
	return 0;
}
