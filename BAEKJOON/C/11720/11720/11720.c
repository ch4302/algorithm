#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, num_sum = 0;
	int num_arr[100];
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%1d", &num_arr[i]);
		num_sum += num_arr[i];
	}

	printf("%d", num_sum);
}