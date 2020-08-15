#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int fixed_cost, variable_cost, laptop_cost;
	scanf("%d %d %d", &fixed_cost, &variable_cost, &laptop_cost);

	if (laptop_cost - variable_cost <= 0) printf("-1");
	else printf("%d", fixed_cost / (laptop_cost - variable_cost) + 1);
}