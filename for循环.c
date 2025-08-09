#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)//for循环判断部分省略条件恒成立
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}


	printf("\n");


	int a = 0;
	int b = 0;
	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3; b++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}