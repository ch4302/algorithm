#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int num;
	int cnt = 1, sum = 0;
	scanf("%d", &num);

	while (1)
	{
		sum += cnt;
		if (sum >= num) break;
		cnt++;
	}
	printf("%d", sum);
}