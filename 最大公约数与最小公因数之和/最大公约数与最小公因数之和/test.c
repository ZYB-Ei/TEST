#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	while (scanf("%d %d", &n, &m) == 2)
	{
		int i = m;
		int j = n;
		int k = 0;
		while (k = j % i)
		{
			j = i;
			i = k;
		}
		printf("%d\n", n * m / i + i);
	}
	return 0;
}