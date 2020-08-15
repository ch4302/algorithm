#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double circle(int r) {
    return r * r * 3.14;
}

int main()
{
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}