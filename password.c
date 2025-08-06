#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	while (1 == 1)
	{
		char password[20] = { 0 };
		printf("请输入密码：");
		scanf("%s", password);

		int ch = 0;
		while((ch = getchar()) != '\n')
		{ }
		// 清除输入缓冲区，防止后续输入被污染
		printf("请确认密码（Y/N）：");
		int pass = getchar();
		while ('Y' == pass)
		{
			if (strcmp("sjhsjw", password) == 0)
			{
				printf("登录成功！\n");
				break;
			}
			else if (strcmp("sjhsjw", password) != 0)
			{
				printf("密码错误，请重新输入：");
				scanf("%s", password);
				while ((ch = getchar()) != '\n')
				{
				}
				printf("请确认密码（Y/N）：");
				pass = getchar();
			}
		}
		while('N' == pass)
		{
			printf("已退出登录！\n");
			break;
		}

		return 0;
	}
}