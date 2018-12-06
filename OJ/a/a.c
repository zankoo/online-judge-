#include <stdio.h>
#include <string.h>

void swap(char a[], int n)
{
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		char t;
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}

int main(void)
{
	char numbers[60], minus_numbers[60];
	int num;
	while (gets(numbers) != NULL)
	{
		num = strlen(numbers);
		if (numbers[0] == '-')
		{
			for (int i = 0; i < num - 1; i++)
			{
				minus_numbers[i] = numbers[i + 1];
			}
			swap(minus_numbers, num - 1);
			printf("-");
			for (int j = 0; j < num - 1; j++)
			{
				printf("%c", minus_numbers[j]);
			}
			printf("\n");
		}
		else
		{
			swap(numbers, num);
			for (int j = 0; j < num; j++)
			{
				printf("%c", numbers[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
