#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr1[100] = { 0 };
	int arr2[200] = { 0 };
	int arr[300] = { 0 };
	int i = 0;

	for (i = 0; i < n; i++)//arr1为第一行数
	{
		scanf("%d", &arr1[i]);
		
	}
	for (i = 0; i < m; i++)//arr2为第二行数
	{
		scanf("%d", &arr2[i]);
	}
	//比大小并有序存入arr
	int j = 0;
	int k = 0;
	int r = 0;
	while (j < n && k < m)
	{
		
		if (arr1[j] < arr2[k])
		{
			arr[r] = arr1[j];
			r++;
			j++;			
		}
		else
		{
			arr[r] = arr2[k];
			r++;
			k++;
		}
	}
	//剩下的数
	if (j < n)
	{
		for (; j < 100; j++, r++)
		{
			arr[r] = arr1[j];
		}
	}
	if (k < m)
	{
		for (; k < 200; k++, r++)
		{
			arr[r] = arr2[k];
		}
	}
	//输出arr数组
	for (r = 0; r < n+m; r++)
	{
		printf("%d ", arr[r]);
	}

	

	 
	return 0;
}