#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[2001];
	gets(str);
	printf("%s", str);
}