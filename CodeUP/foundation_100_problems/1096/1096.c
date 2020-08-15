#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, x, y;
	int num_arr[19][19] = { 0, };
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		scanf("%d %d", &x, &y);
		if (num_arr[x - 1][y - 1] == 0) num_arr[x - 1][y - 1]++;
		else ;
	}

	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			printf("%d ", num_arr[i][j]);
		}
		printf("\n");
	}

}