#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

void f(int n)
{
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("composite");
            return;
        }
    }
    printf("prime");
}

int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}