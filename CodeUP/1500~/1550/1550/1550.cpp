#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>

long long int n;

int sqrt(long long int n)
{
    long long int i;
    for (i = 0; i * i < n; i++);

    if (i * i == n)
    {
        return i;
    }
    else
    {
        return i - 1;
    }
}

int main()
{
    scanf("%lld", &n);
    printf("%d\n", sqrt(n));
    return 0;
}