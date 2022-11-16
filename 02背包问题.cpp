#include<iostream>
using namespace std;
#include<algorithm>

int w[5] = { 0,2,3,4,5 };
int v[5] = { 0,3,4,5,6 };
int dp[5][9] = { {0} };
int item[5];
int bag = 8;

void findMax();
void findWhat(int i, int j);
int main0201()
{
	findMax();
	findWhat(4, 8);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << item[i] << " ";
	}

	return 0;
}
void findMax()
{
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 8; j++)
		{
			if (w[i] > j)
			{
				dp[i][j] = dp[i - 1][j];
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			}
		}
	}
}

void findWhat(int i, int j)
{
	if (i >= 0)
	{
		if (dp[i][j] == dp[i - 1][j])
		{
			item[i] = 0;
			findWhat(i - 1, j);
		}
		else if (j - w[i] >= 0 && dp[i][j] == dp[i-1][j-w[i]] + v[i])
		{
			item[i] = 1;
			findWhat(i - 1, j - w[i]);
		}
	}
}
