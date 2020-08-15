#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(char* ch1, char* ch2)
{
	char temp;
	temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;
}

int main()
{
	char ch1, ch2;

	scanf("%c %c", &ch1, &ch2);
	swap(&ch1, &ch2);
	printf("%c %c", ch1, ch2);
}