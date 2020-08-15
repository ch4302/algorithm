#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, m, x;

int max(int p, int q) { return p >= q ? p : q; }

int min(int p, int q) { return p < q ? p : q; }

int mid(int p, int q, int r) {
    if (max(max(p, q), r) > p && min(min(p, q), r) < p) return p;
    if (max(max(p, q), r) > q && min(min(p, q), r) < q) return q;
    if (max(max(p, q), r) > r && min(min(p, q), r) < r) return r;
}

int main()
{
    scanf("%d%d%d", &n, &m, &x);
    printf("%d\n", mid(n, m, x));
}