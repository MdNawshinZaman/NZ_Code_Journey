#include<stdio.h>

int main(void)
{
    int a, b, r, q;
    scanf("%d %d", &a, &b);

    r = a % b;
    q = a/b;

    printf("%d %d\n", q, r);

    return 0;
}