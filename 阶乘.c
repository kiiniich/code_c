#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int jie(int x)
{
	int c = 0;
	int ret = 1;
	for (c = 1; c <= x; c++)
	{
		ret = ret * c;
	}
	return ret;
}



int main()
{
	/*int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("%d\n", ret);

	printf("\n");*/

	int a = 1;
	int sum = 0;
	int n = 1;
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
	{
		int b = jie(a);
		sum = sum + b;
	}
	printf("%d\n", sum);


	int m = 1;
	int ret = 1;
	int sum1 = 0;
	for (m = 1; m <= 10; m++)
	{
		ret = ret * m;
		sum1 = sum1 + ret;
	}
	printf(" % d\n", sum1);
	return 0;
}