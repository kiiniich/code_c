#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


void menu()
{
	printf("*****************************\n");
	printf("*****  输入 1 开始游戏  *****\n");
	printf("*****  输入 0 退出游戏  *****\n");
	printf("*****************************\n");
}


void game()
{
	int guess = 0;
	//生成随机数
	int ret = rand()%100+1;
	while (1)
	{
		printf("请猜数字：");
		scanf("%d",&guess);
		if (guess < ret)
			printf("猜小了\n");
		else if (guess > ret)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
	
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			Sleep(1000);
			printf("即将返回菜单\n");
			Sleep(2100);
			break;
		case 0:
			printf("已退出\n");
			break;
		default:
			printf("选择错误，重新选择。\n");
			break;
		}
	}
	while (input);
	return 0;
}