#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int n;

long long int f(long long int n) {
    long long int ret = 0, k = 1;
    int i = 0;
    int arr[20];
    while (n > 0) {
        arr[i] = n % 10;
        i++;
        n /= 10;
    }
    for (int j = i - 1; j >= 0; j--) {
        ret += arr[j] * k;
        k *= 10;
    }
    return ret;
}

int main()
{
    scanf("%lld", &n);
    printf("%lld\n", f(n));
}