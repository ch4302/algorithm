#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, count = 1, std = 1;
	scanf("%d", &num);

	while (1) {
		if (num == 1) {
			break;
		}
		std += 6 * count;
		count++;
		if (std >= num) {
			break;
		}
	}
	printf("%d", count);
}