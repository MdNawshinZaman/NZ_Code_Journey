#include<stdio.h>

int main(void)
{
    long long n, m, sum = 0;
    scanf("%lld %lld", &n, &m);

    sum = (n % 10) + (m % 10);
    printf("%lld\n", sum);

    return 0;
}