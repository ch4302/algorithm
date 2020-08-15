#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, d[110];

int f()
{
    int idx, max = -1;
    for (int i = 0; i < n; i++) {
        if (max < d[i]) {
            idx = i + 1;
            max = d[i];
        }
    }
    return idx;
}

int main()
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &d[i]);

    printf("%d", f());
    return 0;
}