#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	while (1 == 1)
	{
		char password[20] = { 0 };
		printf("���������룺");
		scanf("%s", password);

		int ch = 0;
		while((ch = getchar()) != '\n')
		{ }
		// ������뻺��������ֹ�������뱻��Ⱦ
		printf("��ȷ�����루Y/N����");
		int pass = getchar();
		while ('Y' == pass)
		{
			if (strcmp("sjhsjw", password) == 0)
			{
				printf("��¼�ɹ���\n");
				break;
			}
			else if (strcmp("sjhsjw", password) != 0)
			{
				printf("����������������룺");
				scanf("%s", password);
				while ((ch = getchar()) != '\n')
				{
				}
				printf("��ȷ�����루Y/N����");
				pass = getchar();
			}
		}
		while('N' == pass)
		{
			printf("���˳���¼��\n");
			break;
		}

		return 0;
	}
}