#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, num_switch;
	scanf("%d", &num);

	if (!(num >= 10000 && num <= 99999))
	{
		return -1;
	}

	/*printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]",
		num/10000*10000, num/1000*1000, num/100*100, num/10*10, num);*/
	num_switch = num / 10000 * 10000;
	printf("[%d]\n", num_switch);
	num -= num_switch;

	num_switch = num / 1000 * 1000;
	printf("[%d]\n", num_switch);
	num -= num_switch;

	num_switch = num / 100 * 100;
	printf("[%d]\n", num_switch);
	num -= num_switch;

	num_switch = num / 10 * 10;
	printf("[%d]\n", num_switch);
	num -= num_switch;

	num_switch = num;
	printf("[%d]\n", num_switch);

}