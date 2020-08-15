#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long n, d[100] = { 0, 1 };

long long fib(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (d[n] != 0) return d[n];

	d[n] = fib(n - 2) + fib(n - 1);
	return d[n];
}

int main()
{
	scanf("%d", &n);
	printf("%lld", fib(n));
}