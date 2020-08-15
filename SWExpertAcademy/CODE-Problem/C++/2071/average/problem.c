#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int num, num_temp = 0;
	double odd_temp = 0.0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			scanf("%d", &num_temp);
			odd_temp += num_temp;
		}
		printf("#%d %d\n", i, (int)round(odd_temp / 10));
		odd_temp = 0;
	}
}