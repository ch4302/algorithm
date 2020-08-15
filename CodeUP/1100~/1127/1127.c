#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double mid_p, fin_p, per_p;
	int mid, fin, per;

	scanf("%lf %d", &mid_p, &mid);
	scanf("%lf %d", &fin_p, &fin);
	scanf("%lf %d", &per_p, &per);

	printf("%.1lf", mid_p * mid + fin_p * fin + per_p * per);
}