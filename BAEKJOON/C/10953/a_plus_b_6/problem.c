#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num_ite;
	int num1, num2;

	scanf("%d", &num_ite);

	for (int i = 1; i <= num_ite; i++)
	{
		scanf("%d,%d", &num1, &num2);
		printf("%d\n", num1 + num2);
	}
}