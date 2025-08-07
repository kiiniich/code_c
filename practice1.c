#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}


int main()
{
	int n = printf("hello,world!");
	printf("\n%d\n", n);





	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));//在上面
	}

	printf("\n");




	printf("printf(\"hello,world!\\n\")\n");

	printf("\n");


	/*int  e, f, g, h;
	scanf("%d %d %d %d", &e, &f, &g, &h);
	if (e - f > 0 && e - g > 0 && e - h > 0)
		printf("%d\n", e);
	else if (f - e > 0 && f - g > 0 && f - h > 0)
		printf("%d\n",f);
	else if (g - e > 0 && g - f > 0 && g - h > 0)
		printf("%d\n", g);
	else
		printf("%d\n", h);  */


	int l = 1;
	int max = 0;
	int m = 0;
	scanf("%d", &max);//假设第一个数最大
	while (l < 4)
	{
		scanf("%d", &m);
		if (m > max)
			max = m;
		l++;
	}
	printf("%d\n", max);





	int arr[4] = { 0 };
	int y = 0;
	while (y < 4)
	{
		scanf("%d", &arr[y]);
		y++;
	}
	int max1 = arr[0];
	y = 1;
	while (y < 4)
	{
		if (arr[y] > max1)
			max1 = arr[y];
		y++;
	}
	printf("%d\n", max1);




	double r = 0;
	scanf("%lf", &r);
	double v = 4 / 3.0 * 3.1415926 * r * r * r;
	printf("%.3lf\n", v);


	return 0;
}


