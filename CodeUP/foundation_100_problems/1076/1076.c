#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;
	scanf("%c", &ch);
	
	for (int i = 97; i <= ch; i++)
	{
		printf("%c ", i);
	}
}