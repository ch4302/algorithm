#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int num_arr[10000] = { 0, };
	scanf("%d", &num);
	for (int i = num; i >= 1; i--)
	{
		scanf("%d", &num_arr[i]);
	}
	
	for (int i = 1; i <= num; i++)
	{
		printf("%d ", num_arr[i]);
	}
}