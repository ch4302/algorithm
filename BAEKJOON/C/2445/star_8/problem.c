#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);

	for (int i = 1; i < num; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		for (int k = (num - i) * 2; k >= 1; k--) {
			printf(" ");
		}
		for (int l = 1; l <= i; l++) {
			printf("*");
		}
		printf("\n");
	}
	
	for (int i = 1; i <= num * 2; i++) {
		printf("*");
	}
	printf("\n");

	for (int i = 1; i < num; i++) {
		for (int j = i; j < num; j++) {
			printf("*");
		}
		for (int k = 1; k <= i * 2; k++) {
			printf(" ");
		}
		for (int l = i; l < num; l++) {
			printf("*");
		}
		printf("\n");
	}
}