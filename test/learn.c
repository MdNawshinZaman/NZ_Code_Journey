#include <stdio.h>

int main(void)
{
    long long int a;
    char str[22];

    scanf("%lld", &a);
    scanf("%s", str);

    long long int k = 0;
    long long int i = 0;
    while (str[i] != '\0')
    {
        k++;
        i++;
    }

    long long int factorial = a;

    long long int z = a % k;

    if (a > k)
    {
        if (z == 0)
        {
            for (long long int j = a - k; j >= k; j -= k)
            {
                factorial *= j;
            }
        }
        else
        {
            for (long long int j = a - k; j >= z; j -= k)
            {
                factorial *= j;
            }
        }
    }
    else
    {
        factorial = 1;
    }

    printf("%lld\n", factorial);

    return 0;
}
