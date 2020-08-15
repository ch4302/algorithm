#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int temp;
	long long res = 1;
	int num_arr[10] = { 0, };

	for (int i = 0; i < 3; i++) {
		scanf("%d", &temp);
		res *= temp;
	}

	while (res >= 1)
	{
		temp = res % 10;
		num_arr[temp]++;
		res /= 10;
	}

	for (int i = 0; i < sizeof(num_arr) / sizeof(int); i++) {
		printf("%d\n", num_arr[i]);
	}
}