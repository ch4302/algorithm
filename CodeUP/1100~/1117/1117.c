#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main()
{
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("%.2lf", num1 * num2);
}