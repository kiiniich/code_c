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
//	//��ϴ�ֵ
//	int m = get_max(a,b);
//	printf("%d\n", m);
//	return 0;
//}

//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ�Ӱ��ʵ��
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
	printf("����ǰ��a=%d��b=%d\n", a, b);
	swap(&a, &b);
	printf("������a=%d��b=%d\n", a, b);
	return 0;
}