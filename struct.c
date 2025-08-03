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
	struct Stu infor = { "张三",23,"男","15546723210" };
	printf("个人信息表\n姓名：%s\n年龄：%d\n性别：%s\n电话：%s\n", infor.name, infor.age, infor.sex, infor.tele);
	return 0;
}