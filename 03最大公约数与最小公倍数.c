#include<stdio.h>

int main0301()//使用for循环实现
{
	int m, n,temp,i;
	scanf_s("%d%d", &m, &n);
	if (m < n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	for (i = n; i > 0; i--)
	{
		if (m % i == 0 && n % i == 0)
		{
			printf("最大公约数=%d\n", i);
			break;
		}
	}
	printf("最小公倍数=%d\n", m * n / i);
	return 0;
}

int main()//使用辗转相除法
{
	int num1, num2, a, b, t;
	scanf_s("%d%d", &num1, &num2);
	a = num1;
	b = num2;
	while (b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	printf("最大公约数=%d\n", a);
	printf("最小公倍数=%d\n", num1 * num2 / a);
	return 0;
}