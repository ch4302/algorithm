#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

void f(int n)
{
    if (n > 0) printf("positive");
    else if (n < 0) printf("negative");
    else printf("zero");
}

int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}