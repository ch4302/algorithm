#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int sum = 0;
	int temp;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &temp);
		sum += pow(temp, 2);
	}
	printf("%d", sum % 10);
}