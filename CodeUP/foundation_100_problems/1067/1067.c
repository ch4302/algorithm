#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	if (num < 0) printf("minus\n");
	else printf("plus\n");

	if (num % 2 == 0) printf("even\n");
	else printf("odd\n");
}