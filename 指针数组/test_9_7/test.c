#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,4,6,9,2 };
	int arr3[] = { 4,7,8,9,10 };
	int* ppr[3] = { arr1,arr2,arr3 };
	int i = 0;
	for (; i < 3; i++)
	{
		int j=0;
		for (; j < 5; j++)
		{
			//printf("%d\n", *(ppr[i] + j));      *(ppr[i]+j)->ppr[i][j]  *arr[i]->*(arr+i)  iÎªÏÂ±ê
			printf("%d ", ppr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
