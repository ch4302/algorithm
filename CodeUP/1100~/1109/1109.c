#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[20];
	int age;
	char dep;
	double pw;

	scanf("%s %d %c %lf", name, &age, &dep, &pw);
	printf("%s\n%d\n%c\n%lg\n", name, age, dep, pw);
}