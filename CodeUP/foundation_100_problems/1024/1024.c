#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	char word[20] = { 0, };
	scanf("%s", word);

	for (int i = 0; i < 20; i++)
	{
		if (word[i] != '\0')
		{
			printf("\'%c\'\n", word[i]);
		}
	}
}