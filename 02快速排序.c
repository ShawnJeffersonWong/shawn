#include<stdio.h>

void quickSort(int arr[], int start, int end);

int main()
{
	int arr[1000];
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	quickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

void quickSort(int arr[], int start, int end)
{
	int i = start;
	int j = end;
	int temp = arr[start];
	if (i > j)
	{
		return;
	}
	while (i != j)
	{
		while (arr[j] >= temp && j > i)
		{
			j--;
		}
		while (arr[i] <= temp && j > i)
		{
			i++;
		}
		if (j > i)
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	arr[start] = arr[i];
	arr[i] = temp;
	quickSort(arr, start, i - 1);
	quickSort(arr, i + 1, end);
}