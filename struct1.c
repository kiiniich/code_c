#include <stdio.h>

struct Stu
{
	char name[50];
};

void print(struct Stu* ps)
{
	printf("%s\n",(*ps).name);
	printf("%s\n", ps->name);
}
int main()
{
	struct Stu s = { "zhangsan" };
	print(&s);
	return 0;
}