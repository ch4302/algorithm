#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, w, h, x_temp, y_temp;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (w >= 2 * x) x_temp = x;
	else x_temp = w - x;

	if (h >= 2 * y)  y_temp = y;
	else y_temp = h - y;

	printf("%d", x_temp < y_temp ? x_temp : y_temp);
}