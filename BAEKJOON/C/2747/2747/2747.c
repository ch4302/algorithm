#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, d[50] = { 0, 1 };

int fib(int n)
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
	printf("%d", fib(n));
}