#include <stdio.h>

struct Stu
{
	char name[20];
	int age;
	char sex[30];
	char tele[20];
};

int main()
{
	struct Stu infor = { "����",23,"��","15546723210" };
	printf("������Ϣ��\n������%s\n���䣺%d\n�Ա�%s\n�绰��%s\n", infor.name, infor.age, infor.sex, infor.tele);
	return 0;
}