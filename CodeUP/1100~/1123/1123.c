#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int celcius;
	scanf("%d", &celcius);

	printf("%.3lf", 9 / (double)5 * (double)celcius + 32);
}