#include<stdio.h>

int main(void)
{
    long long a;
    scanf("%lld", &a);
    printf("%lld\n", (a * (a + 1))/2);

    return 0;
}