#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	
reload:

	scanf("%d", &num);
	if (num == 0) return 0;

	printf("%d\n", num);

	if (num != 0) goto reload;
	 
}