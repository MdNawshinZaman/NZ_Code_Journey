#include<stdio.h>

int main(void)
{
    int a;
    char str[22];

    scanf("%d", &a);
    fflush(stdin);
    scanf("%s", str);

    int k = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        k++;
        i++;
    }

    printf("k = %d\n\n", k);

    long long int factorial = 1;

    int z = a % k;
    if(z == 0)
    {
        for(int j = a; j <= k; j-=k)
        {
            factorial *= j;
        }
    }

    else
    {
        for(int j = a; j <= z; j-=k)
        {
            factorial *= j;
        }
    }

    printf("%lld\n", factorial);

    return 0;
}