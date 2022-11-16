#include<stdio.h>

int main0401()
{
	int x, y, i;
	scanf_s("%d%d", &x, &y);
	int count = 0;
	int num[3000];
	for (i = x; i <= y; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			num[count] = i;
			count++;
		}
	}
	printf("%d\n", count);
	for (i = 0; i < count; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}