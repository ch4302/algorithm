#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int length, height;

	scanf("%d %d", &length, &height);
	printf("%.1lf", length * (double)height / 2);
}