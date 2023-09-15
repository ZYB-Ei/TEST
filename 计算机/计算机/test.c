#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("****1.Add    2.Sum****\n");
	printf("****3.Mul    4.Div****\n");
	printf("********0.Exit********\n");
	printf("**********************\n");
}
void cale(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int rem = 0;
	printf("请输入两个数：>");
	scanf("%d %d", &x, &y);
	rem=pf(x, y);
	printf("%d\n", rem);
}
int Add(int x, int y)
{
	return x + y;
 }
int Sum(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	menu();
	printf("请选择：>");
	scanf("%d", &input);
	int (*arr[5])(int, int) = { 0,Add,Sum,Mul,Div };
	do
	{
		if (input == 0)
		{
			printf("退出计算机\n");
		}
		else if (input >= 1 && input <= 4)
		{
			int x = 0;
			int y = 0;
			int rem = 0;
			printf("请输入两个数：>");
			scanf("%d %d", &x, &y);
			rem = arr[input](x, y);
			printf("%d\n", rem);
		}
		else
		{
			printf("输入错误\n");
		}
	} while (input);
	
 
	/*do
	{
		switch (input)
		{
		case 0:
			printf("退出计算机\n");
			break;
		case 1:
			cale(Add);
			break;
		case 2:
			cale(Sum);
			break;
		case 3:
			cale(Mul);
			break;
		case 4:
			cale(Div);
			break;
		default:
			printf("输入错误\n");
			break;
		}
		printf("\n");
	} while (input);*/
	
	return 0;
}