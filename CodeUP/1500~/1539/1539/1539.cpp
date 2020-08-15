#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

void f(int n) {
    if (n) {
        printf("true");
        return;
    }
    printf("false");
    return;
}

int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}