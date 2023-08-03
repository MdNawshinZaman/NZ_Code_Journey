#include<stdio.h>
#include<math.h>

int main(void)
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    printf("%lld\n", ((a * b * c * d) % 100));

    return 0;
}