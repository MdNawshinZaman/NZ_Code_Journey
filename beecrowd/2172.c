#include<stdio.h>

int main(void)
{
    #define int unsigned long long
    while(1)
    {
        int x, m, e;
        scanf("%llu %llu", &x, &m);
        if((x == 0) && (m == 0)){break;}

        printf("%llu\n", (x * m));
    }

    return 0;
}