#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time;
	scanf("%d", &time);

	printf("%d %d", time / 60, time % 60);
}