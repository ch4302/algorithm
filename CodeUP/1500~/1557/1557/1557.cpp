#include <stdio.h>

int n;

int f(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cnt++;
    }
    return cnt;
}

int main()
{
    scanf("%d", &n);
    printf("%d\n", f(n));
}