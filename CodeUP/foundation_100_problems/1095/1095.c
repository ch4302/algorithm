#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, min = 99999;
	int num_arr[10000] = { 0, };
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		scanf("%d", &num_arr[i]);
		if (min > num_arr[i]) min = num_arr[i];
	}
	printf("%d", min);
}