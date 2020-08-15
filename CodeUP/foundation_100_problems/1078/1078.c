#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0;
	int num;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (i % 2 == 0) sum += i;
	}
	printf("%d", sum);
}