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
				arr[j] = arr[j] - arr[j + 1];//����
				/*z = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = z;*/
				count = 1;//���һ��û�н���˵���Ѿ��ź���
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
	printf("������ʮ����\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("����ǰ�����飺>");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);//��ӡʮ����(ǰ)
	}
	Bubble(arr, 10);
	printf("\n���������飺>");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);//��ӡʮ��������
	}
	return 0;
}