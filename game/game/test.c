#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
void menu()
{
	printf("************************\n");
	printf("****1.play****0.exit****\n");
	printf("************************\n");
}

void game()
{
	char ret=0;
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);//初始化
	DisplayBoard(board,ROW,COL);//打印
	while (1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin (board,ROW,COL);//判断
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'X')
	{
		printf("玩家赢了\n");
	}
	else if(ret=='O')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
}

int main()
{		
	srand((unsigned int)time(NULL));//设置随机值
	int input = 0;
	do
	{
		menu();
		printf("请输入：\n");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");

		}
	} while (input);
	menu();
	return 0;
}