#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int ite;
	char arr_ox[80];
	scanf("%d", &ite);

	for (int i = 1; i <= ite; i++) {
		int sum = 0;
		int stack = 1;
		scanf("%s", arr_ox);
		for (int j = 0; j < strlen(arr_ox); j++) {
			if (arr_ox[j] == 'O') {
				sum += stack;
				stack++;
			}
			if (arr_ox[j] == 'X')
			{
				stack = 1;
			}
		}
		printf("%d\n", sum);
	}
}