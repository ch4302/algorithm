#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE 15

char arr[5][MAX_SIZE];

int main() {

	int i, j;

	for (i = 0; i < 5; i++) {
		scanf("%s", arr[i]);
	}

	for (j = 0; j < MAX_SIZE; j++) {
		for (i = 0; i < 5; i++) {
			if (arr[i][j] == NULL) continue;
			else printf("%c", arr[i][j]);
		}
	}
	return 0;
}
