#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main()
{
	char str;

	while (scanf("%c", &str) != EOF) {
		if (str == ' ') printf(" ");
		else if (str == 'a') printf("x");
		else if (str == 'b') printf("y");
		else if (str == 'c') printf("z");
		else printf("%c", str - 3);
	}
}