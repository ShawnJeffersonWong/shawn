#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int count1 = 0;
int count2 = 0;
int halfsearch(int key, int* a, int n);//���ֲ����㷨
int binarysearch(int key, int* a, int left, int right);//���ֲ��ҵݹ�ʵ��
int main01()
{
	srand((size_t)time(NULL));
	int number = rand()%100+1;
	int count = 0;
	int n = 1;
	int a[100];
	for (int i = 0; i < 100; i++)
	{
		a[i] = n;
		n++;
	}
	int b = 0;
printf("���Ѿ������һ��1��100֮��������²����1��100֮�������");
do {
	scanf_s("%d", &b);
	count++;
	if (b > number) { printf("��µ������ˡ��ٲ²¿���"); }
	else if (b < number) { printf("��µ���С�ˡ��ٲ²¿���"); }
 } while (b != number);
   	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);

	int answer1 = halfsearch(number, a, 100);
	int answer2 = binarysearch(number, a, 0, 99);
	printf("�����ֲ���)����%d�ξͲµ��˴�,����%d\n", count1, answer1);
	printf("(�ݹ�)����%d�ξͲµ��˴�,����%d\n", count2, answer2);

		return 0;
}

int halfsearch(int key, int* a, int n)
{
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		count1++;
		int mid = (left + right)/2;
		if (a[mid] > key)
		{
			right = mid - 1;
		}
		else if (a[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return a[mid];
		}
	}
	return -1;
}

int binarysearch(int key, int* a, int left,int right)
{
	count2++;
	int mid = (left + right) / 2;
	if (a[mid] == key)
	{
		return a[mid];
	}
	if (a[mid] > key)
	{
		return binarysearch(key, a, left, mid - 1);
	}
	if (a[mid] < key)
	{
		return binarysearch(key, a, mid + 1, right);
	}
}

