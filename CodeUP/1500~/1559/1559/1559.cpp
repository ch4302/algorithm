#include <stdio.h>

int n, m;

long long int f(int p, int q)
{
    return (long long int)p + q; 
}

int main()
{
    scanf("%d%d", &n, &m);
    printf("%lld\n", f(n, m));
}