#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void game()
{
	//プレイヤーが「*」を、コンピュータが「#」をプレイしたとします。
	char board[ROW][COL] = { 0 };
		//ボードの初期化
	InitBoard(board, ROW, COL);
	//プリントチェス盤
	DisplayBoard(board, ROW, COL);
	//チェスをする選手たち
	char ret = 0;
	while (1)
	{
		srand((unsigned)time(NULL));
		Player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		//勝敗の判定
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("プレーヤーズ・ウィン\n");
	}
	else if (ret == '#')
	{
		printf("コンピュータの勝利\n");
	}
	else
	{
		printf("引き分け\n");
	}

}
void menu()
{
	printf("**************************\n");
	printf("******  1.star  **********\n");
	printf("******  0.exit  **********\n");
	printf("**************************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("1または0を入力してください。：");
		scanf("%d", &input);
		switch (input)
		{
		case(1):
			game(); break;
		case(0):
			printf("ゲームを終了する\n"); break;
		default:
			printf("選択が間違っています。もう一度選択してください\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}