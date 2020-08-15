#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int mole_C, mole_H;
	scanf("C%dH%d", &mole_C, &mole_H);

	printf("%d", 12 * mole_C + 1 * mole_H);
}