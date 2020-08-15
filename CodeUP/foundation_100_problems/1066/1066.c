#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num_arr[3];
	
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &num_arr[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		if (num_arr[i] % 2 == 0) printf("even\n");
		else printf("odd\n");
	}
}