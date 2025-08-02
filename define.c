#include <stdio.h>

#define ADD(x,y) ((x)+(y))

int main()
{
	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	printf("%d\n", c);
	return 0;
}