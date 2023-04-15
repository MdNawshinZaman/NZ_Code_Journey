#include <stdio.h>

int main(void)
{
    #define int unsigned long long

    int n, d;
    scanf("%llu", &n);

    while(1)
    {
        d = n % 10;
        printf("%llu", d);
        n /= 10;

        if (n == 0)
        {
            break;
        }
    }
    printf("\n");

    return 0;
}