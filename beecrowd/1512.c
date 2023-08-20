#include <stdio.h>
#include <math.h>
#include <string.h>

int gcd(int a, int b)
{
    if(b == 0) return a;
    int r = a % b;
    return gcd(b,r);
}

int main(void)
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    printf("%d", (n/a) + (n/b) - (gcd()))


    return 0;
}