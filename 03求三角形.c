#include<stdio.h>

int main()
{
	int n;
	int m = 1;
	int x = 1;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (m < 10)
			{
				printf("0%d", m);
			}
			else
			{
				printf("%d", m);
			}
			m++;
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf("  ");
		}
		for (int t = 1; t <= i; t++)
		{
			if (x < 10)
			{
				printf("0%d", x);
			}
			else
			{
				printf("%d", x);
			}
			x++;
		}
		printf("\n");
	}

	return 0;
}