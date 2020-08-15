#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, k, d[1010];

int upper_bound(int k) {
    for (int i = 1; i <= n; i++) {
        if (d[i] > k) return i;
    }
    if (d[n] <= k) return n + 1;
    return 1;
}

int main()
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &d[i]);

    scanf("%d", &k);

    printf("%d\n", upper_bound(k));
}