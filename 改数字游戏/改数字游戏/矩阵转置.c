#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int ar[10][10] = { 0 };
	int i = 0; int j = 0;
	for (i = 0; i < n; i++)//行
	{
		for (j = 0; j < m; j++)//列
		{
			scanf("%d", &ar[i][j]);
		}
	}
	for (i = 0; i < m; i++)//行
	{
		for (j = 0; j < n; j++)//列
		{
			printf("%d ", ar[j][i]);
		}
		printf("\n");
	}
	return 0;
}