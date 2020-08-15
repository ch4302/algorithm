#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = num; j > i; j--) {
			printf(" ");
		}
		for (int k = 1; k <= i * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = num - 1; i >= 1; i--) {
		for (int j = num - 1; j >= i; j--) {
			printf(" ");
		}
		for (int k = 1; k <= i * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}
