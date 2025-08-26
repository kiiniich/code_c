#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


void menu()
{
	printf("*****************************\n");
	printf("*****  输入 1 开始游戏  *****\n");
	printf("*****  输入 2 进入设置  *****\n");
	printf("*****  输入 0 退出游戏  *****\n");
	printf("*****************************\n");
}


void game(int max)
{
	int guess = 0;
	int i = 0;
	//生成随机数
	int ret = rand()%100+1;
	for(i = 0; i < max; i++)
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
	if(i == max)
	printf("%d次未猜对，游戏结束！\n",max);
	Sleep(1000);
}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	int cishu = 3;

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 2:
			printf("请输入你想猜测的次数（默认是3次）：");
			scanf("%d", &cishu);
			printf("设置成功！\n");
			break;
		case 1:
			printf("游戏即将开始!\n");
			Sleep(2000);
			printf("你只有%d次猜的机会。\n",cishu);
			Sleep(2000);
			game(cishu);
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