#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main()
{
	char str;

	while (scanf("%c", &str) != EOF) {
		if (str == ' ') printf(" ");
		else printf("%c", 'a' + (str - 'a' + 3) % 26);
	}
}
