#include<stdio.h>

int rec(int n);
int main0201()
{
	int i,N;
	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
	{
		printf("%d\t\n", rec(i));
	}
}

int rec(int n)//µÝ¹éº¯Êý
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return rec(n - 1) + rec(n - 2);
}