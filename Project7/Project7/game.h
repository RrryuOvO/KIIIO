#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
//関数の宣言
#include<stdio.h>
#define ROW 3
#define COL 3
#include<time.h>
#include <stdlib.h>
void InitBoard(char board[ROW][COL], int row, int col);//初期化関数
void DisplayBoard(char board[ROW][COL], int row, int col);
void Player_move(char board[ROW][COL], int row, int col);//プレーヤーチェス
void computer_move(char board[ROW][COL], int row, int col);//コンピュータチェス
char is_win(char board[ROW][COL], int row, int col);