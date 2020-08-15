#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int front, back;
	scanf("%d-%d", &front, &back);
	printf("%06d%d", front, back);
}