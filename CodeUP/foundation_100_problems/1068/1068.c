#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	if (num >= 90)
	{
		printf("A");
	}
	else if (num >= 70)
	{
		printf("B");
	}
	else if (num >= 40)
	{
		printf("C");
	}
	else
	{
		printf("D");
	}
}