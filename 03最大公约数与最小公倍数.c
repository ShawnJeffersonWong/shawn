#include<stdio.h>

int main0301()//ʹ��forѭ��ʵ��
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
			printf("���Լ��=%d\n", i);
			break;
		}
	}
	printf("��С������=%d\n", m * n / i);
	return 0;
}

int main()//ʹ��շת�����
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
	printf("���Լ��=%d\n", a);
	printf("��С������=%d\n", num1 * num2 / a);
	return 0;
}