#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int num, num_temp, odd_temp = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			scanf("%d", &num_temp);
			if (num_temp % 2 == 1)
			{
				odd_temp += num_temp;
			}
		}
		printf("#%d %d\n", i, odd_temp);
		odd_temp = 0;
	}	
}