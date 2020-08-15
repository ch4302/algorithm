#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num_size, num;
	scanf("%d", &num_size);

loop:
	scanf("%d", &num);
	printf("%d\n", num);
	if (--num_size != 0) goto loop;
}