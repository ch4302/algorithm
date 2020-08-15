#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num_arr[9];
	int max = -9999;
	int idx = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &num_arr[i]);
		if (max < num_arr[i]) {
			max = num_arr[i];
			idx = i + 1;
		}
	}

	printf("%d\n%d", max, idx);
}