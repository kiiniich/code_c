#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			break;
		printf("%d ", i);
		i++;
		
	}
	
	int a = 1;
	while (a <= 12)
	{
		a++;
		if (5 == a)
			continue;
		printf("%d ", a);
	}
	return 0;
}