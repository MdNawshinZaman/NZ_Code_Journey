#include<stdio.h>

int main(void)
{
    long long int a;
    char str[22];

    scanf("%lld", &a);
    fflush(stdin);
    scanf("%s", str);

    long long int k = 0;
    long long int i = 0;
    while(str[i] != '\0')
    {
        k++;
        i++;
    }

    printf("a = %lld\nk = %lld\n", a, k);

    long long int factorial = a;

    long long int z = a % k;
    printf("z = %lld\n", z);

    if(z == 0)
    {
        for(int j = a - k; j >= k; j-=k)
        {
            factorial *= j;
        }
    }

    else
    {
        for(int j = a - k; j >= z; j-=k)
        {
            factorial *= j;
        }
    }

    printf("%lld\n", factorial);

    return 0;
}