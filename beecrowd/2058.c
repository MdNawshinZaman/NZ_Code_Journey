#include <stdio.h>

int main(void)
{
    unsigned long long int n, num_triangle;
    scanf("%llu", &n);

    num_triangle = n - 2;

    printf("%llu\n", num_triangle);

    return 0;
}