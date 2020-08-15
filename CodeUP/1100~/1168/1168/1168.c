#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr_ymd[6];
	int ymd = 0, si, age;
	
	scanf("%d %d", ymd, &si);
	ymd = arr_ymd[0] * 10 + arr_ymd[1];

	printf("%d\n", ymd);
	printf("%d", si);
	if (si == 1 || si == 2) {
		age = 2012 - (1900 + ymd);
	}
	else {
		age = 2012 - (2000 + ymd);
	}
	printf("%d", age);
}