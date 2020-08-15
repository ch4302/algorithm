#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int student_score[1000];
	int num;
	int max = 0;
	int min = 1000;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &student_score[i]);
		if (max < student_score[i]) max = student_score[i];
		if (min > student_score[i]) min = student_score[i];
	}

	printf("%d", max - min);
}