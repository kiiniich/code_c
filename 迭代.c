#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//递归的写法，求斐波那契数，效率低
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = fib(i);
//	printf("%d\n", ret);
//	return 0;
//}

//迭代的写法
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	int ret = fib(i);
	printf("%d\n", ret);
	return 0;
}