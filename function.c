#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//
//get_max(int x, int y)
//{
//	return(x > y ? x : y);
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求较大值
//	int m = get_max(a,b);
//	printf("%d\n", m);
//	return 0;
//}

//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不影响实参
//void swap (int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

void swap(int *px, int *py)
{
	int z = *px;
	*px = *py;
	*py = z;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	printf("交换前：a=%d，b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后：a=%d，b=%d\n", a, b);
	return 0;
}