#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, count = 0;
	scanf("%d", &num);

	while (num > 0)
	{
		if (num % 5 == 0)
		{
			count++;
			num -= 5;
		}
		else if (num % 3 == 0)
		{
			count++;
			num -= 3;
		}
		else if (num > 5)
		{
			count++;
			num -= 5;
		}
		else {
			count = -1;
			break;
		}
	}

	printf("%d", count);
}