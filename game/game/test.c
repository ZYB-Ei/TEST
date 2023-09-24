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
	InitBoard(board, ROW, COL);//��ʼ��
	DisplayBoard(board,ROW,COL);//��ӡ
	while (1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin (board,ROW,COL);//�ж�
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
		printf("���Ӯ��\n");
	}
	else if(ret=='O')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

int main()
{		
	srand((unsigned int)time(NULL));//�������ֵ
	int input = 0;
	do
	{
		menu();
		printf("�����룺\n");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");

		}
	} while (input);
	menu();
	return 0;
}