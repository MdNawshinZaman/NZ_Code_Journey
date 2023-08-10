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
        sprintf(str, "%0,.2f", sum);
        int len = strlen(str);

        printf("%s\n", str);

    }


    return 0;
}