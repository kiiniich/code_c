#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


void menu()
{
	printf("*****************************\n");
	printf("*****  ���� 1 ��ʼ��Ϸ  *****\n");
	printf("*****  ���� 0 �˳���Ϸ  *****\n");
	printf("*****************************\n");
}


void game()
{
	int guess = 0;
	//���������
	int ret = rand()%100+1;
	while (1)
	{
		printf("������֣�");
		scanf("%d",&guess);
		if (guess < ret)
			printf("��С��\n");
		else if (guess > ret)
			printf("�´���\n");
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			Sleep(1000);
			printf("�������ز˵�\n");
			Sleep(2100);
			break;
		case 0:
			printf("���˳�\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	}
	while (input);
	return 0;
}