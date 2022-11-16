#include<stdio.h>

int main0301()
{
	int n;
	scanf_s("%d", &n);
	int m = n;
	int num[1000];
	int i = 0;
	while (m != 1)
	{
		if (m % 2 == 0)
		{
			m /= 2;
		}
		else
		{
			m = m * 3 + 1;
		}
		num[i] = m;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d ", num[j]);
	}
	printf("%d", n);

	return 0;
}