#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char score;
	scanf("%c", &score);

	switch (score)
	{
	case 'A':
		printf("best!!!");
		break;

	case 'B':
		printf("good!!");
		break;

	case 'C':
		printf("run!");
		break;

	case 'D':
		printf("slowly~");
		break;

	default:
		printf("what?");
		break;
	}


}