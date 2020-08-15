#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 1;
	while (num != 0)
	{
		scanf("%d", &num);
		if (num == 0) ;
		else printf("%d\n", num);
	}
}