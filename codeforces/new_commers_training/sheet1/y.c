#include<stdio.h>
#include<math.h>

int main(void)
{
    unsigned long long a, b, c, d;
    scanf("%llu %llu %llu %llu", &a, &b, &c, &d);
    printf("%llu\n", ((a * b * c * d) % 100));

    return 0;
}