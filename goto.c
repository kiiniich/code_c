#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("���Խ���1���Ӻ�ػ������롰ȡ������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "ȡ��") == 0)
	{
		system("shutdown -a");
		printf("��ȡ���ػ�\n");
	}
	else
	{
		goto again;
	}
	return 0;
}