#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;

loop:

	scanf("%c ", &ch);
	printf("%c\n", ch);

	while (ch != 'q') goto loop;
}