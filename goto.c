#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("电脑将在1分钟后关机，输入“取消”以取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "取消") == 0)
	{
		system("shutdown -a");
		printf("已取消关机\n");
	}
	else
	{
		goto again;
	}
	return 0;
}