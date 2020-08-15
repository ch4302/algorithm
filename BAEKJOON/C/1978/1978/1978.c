#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, temp,cnt = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		scanf("%d", &temp);
		if (temp == 2) {
			cnt++;
		}		
		for (int j = 2; j < temp; j++) {
			if (temp % j == 0) break;
			if (j == temp - 1) cnt++;
		}
	}
	printf("%d", cnt);
}