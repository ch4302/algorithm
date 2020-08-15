#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3;
	long long num_sum;

	scanf("%d %d %d", &num1, &num2, &num3);
	num_sum = num1 + num2 + num3;

	printf("%lld\n", num_sum);
	printf("%.1f", num_sum / (float)3);
}