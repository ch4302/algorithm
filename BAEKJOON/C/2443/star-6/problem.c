#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);

	for (int i = num; i >= 1; i--) {
		
		for (int j = 0; j < num - i; j++) {
			printf(" ");
		}

		for (int k = i * 2 - 1; k >= 1; k--) {
			printf("*");
		}

		printf("\n");
	}
}