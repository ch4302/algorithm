#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int n) 
{
	if (n == 0) return 1;
	else if (n == 1) return 1;
	else return n * fact(n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", fact(n));
}