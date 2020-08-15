#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[10000];
	int val[10000];
	int val_flag[10];
	int val_flag_sum = 0;
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) 
	{
		scanf("%s", &str);
		for (int j = 0; str[j] != '\0'; j++) 
		{
			val[j] = str[j] - '0';
			if (val_flag[val[j] - 1] == 0) val_flag[val[j] - 1] = 1;
			else val_flag[val[j] - 1] = 0;
		}

		for (int k = 0; k < 10; k++) 
		{
			if (val_flag[k] == 1) val_flag_sum++;
		}
		printf("#%d %d\n", i, val_flag_sum);
		val_flag_sum = 0;
	}
}