#include<stdio.h>
#include<string.h>

int main(void)
{
    long long int n, m;
    while(scanf("%lld %lld", &n, &m) != EOF)
    {
        double sum = 0;
        sum = n + (m / 100.0);

        char str[30];
        gcvt(sum, 30, str);

        printf("%s\n", str);

    }


    return 0;
}