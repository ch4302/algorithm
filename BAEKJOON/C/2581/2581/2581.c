#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num_s, num_e, min = 0, sum = 0;
	scanf("%d %d", &num_s, &num_e);

	for (int i = num_s; i <= num_e; i++) {
		if (i == 2) {
			sum += 2;
			min = 2;
		}

		for (int j = 2; j < i; j++) {
			if (i % j == 0) break;
			if (j == i - 1) {
				sum += i;
				if (min == 0) min = i;
			}
		}
	}

	if (sum == 0) printf("-1");
	else printf("%d\n%d", sum, min);
	
}