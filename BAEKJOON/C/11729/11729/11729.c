#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi(int from, int temp, int to, int n)
{
	if (n == 1) {
		printf("%d %d\n", from, to);
	}
	else
	{
		hanoi(from, to, temp, n - 1);
		printf("%d %d\n", from, to);
		hanoi(temp, from, to, n - 1);
	}
}

void hanoi_cnt(int n)
{
	int num = 1;
	while (--n) {
		num = num * 2 + 1;
	}
	printf("%d\n", num);
}

int main()
{
	int n;
	scanf("%d", &n);
	hanoi_cnt(n);
	hanoi(1, 2, 3, n);
}