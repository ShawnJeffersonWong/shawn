#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#define A 4+5
//#define B A*A
#define A(x) x;x;x;x;x;x;x;x;x;x;
//int main0101()
//{
//	int value = B * B;
//	printf("%d\n", value);
//	return 0;
//}

int main0102()
{
	int i = 6;
	int j = 1;
	if (i > 0 || (j++) > 0);
	printf("%d\r\n", j);
	return 0;
}

int fun3(int x)
{
	static int a = 2;
	a += x;
	return (a);
}
int main0103()
{
	int k = 2, m = 1, n;
	n = fun3(k);
	n += fun3(m);
	printf("%d\n", n);
	return 0;
}
int main0104()
{
	int a = 10, b = 9;
	printf("%d\n", (a = b));
	b = (a + b) - (a = b);
	printf("%d\n", b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d,b = %d", a, b);
	return 0;
}

struct s2
{
	char c1;
	double b;
	int a;
};
struct s3
{
	int d;
	char c;
	int i;
	struct s2 t;
};
int main0105()
{
	printf("%d\n", sizeof(struct s2));
	printf("%d\n", sizeof(struct s3));
	return 0;
}

int main0106()//不用循环和递归打印出1到1000
{
	int n = 1;
	A(A(A(printf("%d ", n++))));
	return 0;
}
int n;
void recursion(int i);
int main()//用递归打印1到n
{
	scanf("%d", &n);
	recursion(1);
	return 0;
}

void recursion(int i)
{
	if (i <= n)
	{
		printf("%d ", i);
		recursion(i + 1);
	}
}