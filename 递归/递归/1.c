#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void print(int s)
//{
//	if (s > 9)
//		print(s / 10);
//	printf("%d ", s % 10);
//}
//int main()
//{
//	unsigned int s = 0;
//	scanf_s ("%d", &s);
//	print(s);
//	return 0;
//}
//int num(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + num(arr+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[50];
//	scanf("%s", arr);
//	/*int f = num(arr);*/
//	printf("%d\n", num(arr));
//	return 0;
//}

int count = 0;
void move(char A,char C,int num)
{
	printf("第%d个，从%c到%c\n", num, A, C);
	count++;	
}

void rule(char A, char B, char C, int num)
{
	if (num == 1)
		move(A, C, num);
	else
	{
		rule('A', 'C', 'B', num - 1);
		move('A', 'C', num);
		rule('B', 'A', 'C', num - 1);
	}
}

int main()
{
	int num;
	int z;
	do
	{	
		printf("\n欢迎游玩汉诺塔，请输入:1or0指令\n开始：1     结束：0\n");
		scanf_s("%d", &z);
		if (z == 1)
		{
			scanf_s("%d", &num);
			rule('A', 'B', 'C', num);
			printf("%d\n", count);
		}
		else if (z == 0)
			break;
		else
			printf("输入错误,请重试\n");
		count = 0;
	} while (1);
	return 0;
}