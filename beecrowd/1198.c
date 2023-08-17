#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long a, b;

    while(scanf("%lld %lld", &a, &b) != EOF)
    {
        printf("%lld\n", abs(a - b));
    }
    return 0;
}