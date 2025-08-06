#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[] = { 99,110,97,100 };
	int i = 0;
	int sf = sizeof(arr) / sizeof(arr[0]);
	while (i < sf)
	{
		printf(" % c", arr[i]);
		i++;
	}





	int year, month, date;
	scanf("%4d%2d%2d", &year, &month, &date);
	printf("year=%d\nmonth=%02d\ndate=%02d\n", year, month, date);
	





	int id = 0;
	float c = 0.0f;
	float math = 0.0f;
	float eng = 0.0f;

	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
	printf("学号为%d的学生成绩为%.2f，%.2f，%.2f\n", id, c, math, eng);
	return 0;
}