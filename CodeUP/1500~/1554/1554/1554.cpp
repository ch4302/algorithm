#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double x;

long long int f(double x) {
    long long int d = (long long int) x;
    if (x >= 0) return x;
    else return x - 1;
}

int main()
{
    scanf("%lf", &x);
    printf("%lld\n", f(x));
}