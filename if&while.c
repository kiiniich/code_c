#include <stdio.h>

int main()
{
	int a = 0;
	while (a < 100)
	{
		if (a % 2 == 1)
			printf("%d ", a);
		a++;
	}
	
	int i = 0;
	while (i <= 100)
	{
		printf("%d ", i);
		i+=2;
	}
	return 0;
}