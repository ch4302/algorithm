#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void myswap(int* a, int* b) {
    if (*a > * b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}