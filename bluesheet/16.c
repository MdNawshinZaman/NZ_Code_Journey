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

    //printf("a = %lld\nk = %lld\n", a, k);

    int factorial = a;

    int z = a % k;
    //printf("z = %lld\n", z);

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

    printf("%d\n", factorial);

    return 0;
}