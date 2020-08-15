#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long long num1, num2, num_sum;

	scanf("%lld %lld", &num1, &num2);

	num_sum = num1 + num2;

	printf("%lld", num_sum);
}