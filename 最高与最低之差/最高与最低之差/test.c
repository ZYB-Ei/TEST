#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	printf("���������ݸ�����>\n");
	scanf("%d", &n);
	int arr[1000];
	int max = 0;
	int min = 100;
	int i;
	int count = 0;
	printf("�������������ݣ�>\n");
	do
	{
		for (i = 0; i < n; i++)
		{			
			scanf("%d", &arr[i]);
			if (arr[i] >= 0 && arr[i] <= 100)
			{
				if (arr[i] > max)
					max = arr[i];
				if (arr[i] < min)
					min = arr[i];
			}
			else
			{
				printf("\n%d������Χ������������%d��:>\n", arr[i], n);
				count = 1;
			}
		}
	} while (count);	
	printf("%d\n", max - min);
	
	return 0;

}
