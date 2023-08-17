#include<stdio.h>

int main(void)
{
    long long v, t;
    while(scanf("%lld %lld", &v, &t) != EOF)
    {
        printf("%lld\n", v*t*2);
    }

    return 0;
}