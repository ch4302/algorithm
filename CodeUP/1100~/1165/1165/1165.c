#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int min, score, goal = 0;
	scanf("%d %d", &min, &score);

	if ((90 - min) % 5 == 0) {
		goal = (90 - min) / 5;
	}
	else {
		goal = (90 - min) / 5 + 1;
	}
	
	printf("%d", score + goal);
}