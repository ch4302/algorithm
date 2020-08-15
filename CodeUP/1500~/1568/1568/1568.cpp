#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, a, b, d[1010];

int maxi(int a, int b) {
    int idx = a;
    int max = d[a];
    for (int i = a; i <= b; i++) {
        if (max < d[i]) max = d[i], idx = i;
    }
    return idx;
}

int main()
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &d[i]);

    scanf("%d%d", &a, &b);

    printf("%d\n", maxi(a, b));
}