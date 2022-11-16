#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int count1 = 0;
int count2 = 0;
int halfsearch(int key, int* a, int n);//二分查找算法
int binarysearch(int key, int* a, int left, int right);//二分查找递归实现
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
printf("我已经想好了一个1到100之间的数。猜猜这个1到100之间的数：");
do {
	scanf_s("%d", &b);
	count++;
	if (b > number) { printf("你猜的数大了。再猜猜看："); }
	else if (b < number) { printf("你猜的数小了。再猜猜看："); }
 } while (b != number);
   	printf("太好了，你用了%d次就猜到了答案。\n", count);

	int answer1 = halfsearch(number, a, 100);
	int answer2 = binarysearch(number, a, 0, 99);
	printf("（二分查找)用了%d次就猜到了答案,答案是%d\n", count1, answer1);
	printf("(递归)用了%d次就猜到了答案,答案是%d\n", count2, answer2);

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

