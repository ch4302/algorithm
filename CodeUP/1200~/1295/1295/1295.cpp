#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main()
{
	char str;

	while (scanf("%c", &str) != EOF) {
		if (str >= 'a' && str <= 'z') printf("%c", 'A' + (str - 'a') % 26);
		else if (str >= 'A' && str <= 'Z') printf("%c", 'a' + (str - 'A') % 26);
		else printf("%c", str);
	}
}
