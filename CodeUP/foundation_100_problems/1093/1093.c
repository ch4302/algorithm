#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, num_idx;
	int num_arr[24] = { 0, };
	scanf("%d", &num);
	
	for (int i = 1; i <= num; i++)
	{
		scanf("%d", &num_idx);
		num_arr[num_idx]++;
	}

	for (int i = 1; i <= 23; i++)
	{
		printf("%d ", num_arr[i]);
	}
}