#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int rn(int x)
{
	if ((x % 4 == 0 && x % 100 != 0)||(x % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{
	while (1)
	{
		int i = 0;
		scanf("%d", &i);
		if (i > 0)
		{
			rn(i);
			if (rn(i))
			{
				printf("������\n");
				break;
			}
			else
			{
				printf("��������\n");
				break;
			}
		}
		else
		{
			printf("���������������\n");
		}
	}
	return 0;
}