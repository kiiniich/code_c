#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp("sjhsjw", password) == 0)
		{
			printf("��¼�ɹ���\n");
			break;
		}
		else
			printf("�������\n");
	}
	if(i == 3)
	printf("������������޷�������¼��\n");

	return 0;
}