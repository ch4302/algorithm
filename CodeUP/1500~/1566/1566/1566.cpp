#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a, n;

long long int pow(long long int a, int n) {
    int a_temp = a;
    if (n == 0 || a == 1) return 1;
    for (int i = 1; i < n; i++) {
        a *= a_temp;
    }
    return a;
}

int main()
{
    scanf("%d%d", &a, &n);
    printf("%lld\n", pow(a, n));
}