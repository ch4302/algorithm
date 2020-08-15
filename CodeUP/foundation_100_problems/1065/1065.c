#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 % 2 == 0) printf("%d\n", num1);
	if (num2 % 2 == 0) printf("%d\n", num2);
	if (num3 % 2 == 0) printf("%d\n", num3);

}