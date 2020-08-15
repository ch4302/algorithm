#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int rem[42] = { 0, };
	int temp;
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &temp);
		if(rem[temp % 42] == 0)	rem[temp % 42]++;
	}

	for (int i = 0; i < sizeof(rem) / sizeof(int); i++) {
		if (rem[i] == 1) cnt++;
	}

	printf("%d", cnt);
}