#include <stdio.h>

long long int n;

long long int abs(long long int n) {
    if (n >= 0) return n;
    else return -n;
}

int main()
{
    scanf("%lld", &n);
    printf("%lld\n", abs(n));
    return 0;
}