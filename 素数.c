#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


//打印100--200之间的素数
int is_prime(int x)
{
	int j = 0;
	for (j = 2; j <= sqrt(x); j++)
	{
		if (x % j == 0)
		{
			return 0;//0为假
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		//int j = 0;
		//int flag = 1;
		//for (j = 2; j <= sqrt(i); j++)
	  //for (j = 2; j <= i/2; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			flag = 0;
	//			break;
	//		}
	//	}
	//	if (flag == 1)
	//	{
	//		count++;
	//		printf("%d ", i);

	//	}
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	  }
	printf("\ncount=%d\n", count);
	return 0;
}