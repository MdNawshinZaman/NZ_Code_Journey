#include<stdio.h>

int main(void)
{
    #define int unsigned long long
    int x, m, e;
    scanf("%llu %llu", &x, &m);
    if((x == 0) && (m == 0)){break;}

    printf("%llu", (x * m));

    return 0;
}