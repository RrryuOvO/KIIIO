#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
//�v��������
#include<stdio.h>
#define ROW 3
#define COL 3
#include<time.h>
#include <stdlib.h>
void InitBoard(char board[ROW][COL], int row, int col);//���ڻ��v��
void DisplayBoard(char board[ROW][COL], int row, int col);
void Player_move(char board[ROW][COL], int row, int col);//�ץ�`��`������
void computer_move(char board[ROW][COL], int row, int col);//����ԥ�`��������
char is_win(char board[ROW][COL], int row, int col);