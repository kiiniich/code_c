#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct Stu 
//{
	//char name[20];
	//int age;
	//char sex[10];
	//char tele[15];
//};
int main()
{
	char name[50] = { 0 };
	int age = 0;
	char sex[30] = { 0 };
	char tele[90] = { 0 };
	printf("ta������/����/�Ա�/�绰�ֱ��ǣ�");
	scanf("%s %d %s %s", name, &age, sex, tele);
	printf("��\n");
	return 0;
}
//struct Stu s = { "����",18,"��","15584243210" };

	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
