#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, sum = 0;
	int i = 1;
	scanf("%d", &num);

	while (1)
	{		
		sum += i;
		if (num <= sum) break;
		i++;
	}

	printf("%d", i);
}