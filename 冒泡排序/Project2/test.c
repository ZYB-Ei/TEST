#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Bubble(int* arr, int k)
{
	int i, j;
	for (i = 0; i < k-1; i++)
	{
		int count = 0;
		for (j = 0; j < k-1 - i; j++)
		{
			int z = 0;
			if (arr[j] > arr[j + 1])
			{
				arr[j] = arr[j] + arr[j+1];
				arr[j + 1] = arr[j] - arr[j + 1];
				arr[j] = arr[j] - arr[j + 1];//交换
				/*z = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = z;*/
				count = 1;//如果一趟没有交换说明已经排好序
			}

		}
		if (count == 0)
			break;
	}

}


int main()
{
	int i = 0;
	int arr[10] = {0};
	printf("请输入十个数\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("排序前的数组：>");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);//打印十个数(前)
	}
	Bubble(arr, 10);
	printf("\n排序后的数组：>");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);//打印十个数（后）
	}
	return 0;
}