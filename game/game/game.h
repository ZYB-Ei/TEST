#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

#include<stdio.h>
void InitBoard(char board[ROW][COL], int row, int col);//初始化
void DisplayBoard(char board[ROW][COL], int row, int col);//打印
void PlayerMove(char board[ROW][COL],int row,int col);//玩家
void ComputerMove(char board[ROW][COL],int row,int col);//电脑
int IsWin(char board[ROW][COL], int row, int col);//判断