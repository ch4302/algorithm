#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int num, num_temp = 0, temp_num1, temp_num2;
	char ineq;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		scanf("%d %d", &temp_num1, &temp_num2);
		if (temp_num1 > temp_num2) ineq = '>';
		else if (temp_num1 < temp_num2) ineq = '<';
		else ineq = '=';

		printf("#%d %c\n", i, ineq);
	}
}