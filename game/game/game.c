#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j]=' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)//��ӡ�и�ʽ %c |
		{
			if (j < col - 1)
				printf(" %c |", board[i][j]);
			if (j == col - 1)
				printf(" %c \n", board[i][j]);
		}
		if (i < row - 1)//��ӡ�и�ʽ---|
		{
			for (j = 0; j < col; j++)
			{
				if (j < col - 1)
					printf("---|");
				if (j == col - 1)
					printf("---\n");
			}
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)//���
{
	int x = 0;
	int y = 0;
	printf("���������>\n");
	
	while (1)
	{
		printf("�������꣺\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж�������Ч
		{
			if (board[x - 1][y - 1] == ' ')//�ж��Ƿ�����
			{
				board[x-1][y-1] = 'X';//�������Ϊ:X
				break;
			}
			else
			{
				printf("���걻ռ��,����������>\n");
				continue;
			}

		}
		else
		{
			printf("������Ч\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������:>\n");
	int x = 0;
	int y = 0;	
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			if(board[x + 1][y + 1] == 'O' || board[x + 1][y - 1] == '0' || board[x - 1][y + 1] == '0' || board[x - 1][y - 1] == '0' || board[x + 1][y] == 'O' || board[x - 1][y] == 'O' || board[x][y + 1] == 'O' || board[x][y - 1] == 'O')
				board[x][y] = 'O';
			else 
				board[x][y]='O';
			break;
		}
	}
	
}
//������˷���1
//���򷵻�0
int IsFull(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0;j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

int IsWin(char board[ROW][COL], int row, int col)
{
	//Ӯ
	int i = 0;//��
	for (i = 0; i < row; i++)
	{	
		int x = 0;//��
		for (x = 0; x < col-2; x++)
		{
			if (board[i][x]==board[i][x+1]&& board[i][x+1] == board[i][x + 2]&&board[i][x]!=' ')
			{
				return board[i][x];
			}
		}
	}
	int j = 0;//��
	for (j = 0; j < col; j++)
	{
		int y = 0;//��
		for (y = 0; y < row-2; y ++)
		{
			if (board[y][j] == board[y+1][j] && board[y+1][j] == board[y+2][j] && board[y][j] != ' ')
			{
				return board[y][j];
			}
		}
	}
	int k = 0;//�Խ���
	for (k = 0; k < row-2; k++)
	{
		int z = 0;
		for (z = 0; z < col-2; z++)
		{
			if (board[k][z] == board[k + 1][z + 1] && board[k + 1][z + 1] == board[k+2][z+2] && board[k][z] != ' ')
			{
				return board[k+1][z+1];
			}
		}
		
	}
	for (k = 2; k < row; k++)
	{
		int z = 0;
		for (z = 2; z < col; z++)
		{
			if (board[k][z-2] == board[k -1][z - 1] && board[k - 1][z - 1] == board[k - 2][z] && board[k-1][z-1] != ' ')
			{
				return board[k-1][z-1];
			}
		}

	}
	//ƽ
	if (IsFull(board,row,col))
	{
		return 'Q';
	}
	//��Ϸ����
	return 'C';

}

