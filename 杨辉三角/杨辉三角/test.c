#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	/*int count = 10;*/
	//scanf("%d", &count);
	int arr[10][10] = { 0 };
	for (a = 0; a < 10; a++)
	{
		arr[a][0] = 1;
		int count = 0;
		for (count=10-a; count > 0; count--)
		{
			printf("  ");
		}
		for (b = 0; b <= a; b++)
		{
			if (a == b)
			{
				arr[a][b] = 1;
			}
			if (a > 1 && b >= 1)
			{
				arr[a][b] = arr[a - 1][b] + arr[a - 1][b - 1];
			}
			printf("%-3d ", arr[a][b]);
		}
		printf("\n");	
	}
	
	return 0;
}