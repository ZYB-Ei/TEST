#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int ar[10][10] = { 0 };
	int i = 0; int j = 0;
	for (i = 0; i < n; i++)//��
	{
		for (j = 0; j < m; j++)//��
		{
			scanf("%d", &ar[i][j]);
		}
	}
	for (i = 0; i < m; i++)//��
	{
		for (j = 0; j < n; j++)//��
		{
			printf("%d ", ar[j][i]);
		}
		printf("\n");
	}
	return 0;
}