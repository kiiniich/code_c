#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "ÄãºÃ£¬»¶Ó­À´µ½ºªµ¦!!!";
	char arr2[] = "#####################";
	int left = 0;
	int right = strlen(arr2) - 1;
	//int right = sizeof(arr1)/sizeof(arr1[0])-2
	while (left<=right)
	{
		arr2[left] = arr1[left];
		//arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);
		system("cls");
		left++;
		//right--;
	}
	printf("ÄãºÃ£¬»¶Ó­À´µ½ºªµ¦!!!");
	return 0;
}