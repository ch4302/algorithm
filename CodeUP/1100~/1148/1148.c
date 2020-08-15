#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, x;
	scanf("%d %d", &a, &x);
	printf("%d", a >> x);
}