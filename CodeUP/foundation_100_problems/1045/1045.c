#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	printf("%d\n%d\n%d\n%d\n%d\n%.2f\n",
		num1 + num2, num1 - num2, num1 * num2, num1 / num2, num1 % num2,
		num1 / (float)num2);
}