#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = num; j > i; j--)
		{
			printf(" ");
		}

		for (int k = 1; k < i * 2; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}