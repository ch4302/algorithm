#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a, b;

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main()
{
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
}