#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


void menu()
{
	printf("*****************************\n");
	printf("*****  ���� 1 ��ʼ��Ϸ  *****\n");
	printf("*****  ���� 2 ��������  *****\n");
	printf("*****  ���� 0 �˳���Ϸ  *****\n");
	printf("*****************************\n");
}


void game(int max)
{
	int guess = 0;
	int i = 0;
	//���������
	int ret = rand()%100+1;
	for(i = 0; i < max; i++)
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
	if(i == max)
	printf("%d��δ�¶ԣ���Ϸ������\n",max);
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 2:
			printf("����������²�Ĵ�����Ĭ����3�Σ���");
			scanf("%d", &cishu);
			printf("���óɹ���\n");
			break;
		case 1:
			printf("��Ϸ������ʼ!\n");
			Sleep(2000);
			printf("��ֻ��%d�βµĻ��ᡣ\n",cishu);
			Sleep(2000);
			game(cishu);
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