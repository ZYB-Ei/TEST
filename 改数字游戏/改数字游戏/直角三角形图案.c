#define _CRT_SECURE_NO_WARNINGS
//针对每行输入，输出用“组成的对应长度的直角三角形，每个的后面有一个空格。
#include<stdio.h>
int main()
{
	int input = 0;
	while (scanf("%d", &input) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < input; i++)
		{
			for (j = 0; j < input; j++)
			{
				if (i + j < input - 1)
				{
					printf("  ");
				}
				else
				{
					printf("* ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
