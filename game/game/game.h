#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

#include<stdio.h>
void InitBoard(char board[ROW][COL], int row, int col);//��ʼ��
void DisplayBoard(char board[ROW][COL], int row, int col);//��ӡ
void PlayerMove(char board[ROW][COL],int row,int col);//���
void ComputerMove(char board[ROW][COL],int row,int col);//����
int IsWin(char board[ROW][COL], int row, int col);//�ж�