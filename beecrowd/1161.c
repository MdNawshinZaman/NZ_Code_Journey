#include <stdio.h>
#include <math.h>
#include <string.h>

long long int factorial(int n)
{
    if(n == 0) return 1;
    return n * factorial(n-1);
}

int main(void)
{

    int m, n;
    while(scanf("%d %d", &m, &n) != EOF)
    {
        printf("%lld %lld\n", factorial(m), factorial(n));
    }

    return 0;
}