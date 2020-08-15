#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, k, d[1010];

int findi(int k) {
    for (int i = 1; i <= n; i++) {
        if (d[i] == k) return i;
    }
    return -1;
}

int main()
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &d[i]);

    scanf("%d", &k);

    printf("%d\n", findi(k));
}