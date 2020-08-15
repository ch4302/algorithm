#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hour, minute, second;
	scanf("%d:%d:%d", &hour, &minute, &second);

	if (minute == 0) printf("0");
	else printf("%02d", minute);
}