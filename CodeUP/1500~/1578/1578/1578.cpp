#include <stdio.h>

int mymax(int a, int b) {
    if (a > b) return a;
    return b;
}

main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymax(a, b));
}