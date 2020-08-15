#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3;
	int day = 1;
	scanf("%d %d %d", &num1, &num2, &num3);
	while (day % num1 != 0 || day % num2 != 0 || day % num3 != 0) day++;
	printf("%d", day);
}