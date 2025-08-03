#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a, &b);
	int c = a / b;
	int d = a % b;
	if (0 < a && b < 10000)
		printf("%d %d\n", c, d);
	else
		printf("´íÎó£¡");
	return 0;
}