#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num_input;
	int num_arr[5];
	int num_cmp = 0;
	scanf("%d", &num_input);

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num_arr[i]);
		if (num_arr[i] == num_input) num_cmp++;
	}

	printf("%d", num_cmp);
}