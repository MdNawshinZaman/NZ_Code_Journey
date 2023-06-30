#include<stdio.h>
#include<string.h>

int main(void)
{
    int a;
    char str[22];

    scanf("%d", &a);
    fflush(stdin);
    scanf("%s", str);

    int k = strlen(str);
    //printf("a = %d\nk = %d\n", a, k);
    int factorial = a;

    int z = a % k;
    //printf("z = %lld\n", z);
    if(a > k)
    {
        if(z != 0)
        {
            for(int j = a - k; j >= z; j-=k)
            {
                factorial *= j;
            }
        }

        else
        {
            for(int j = a - k; j >= k; j-=k)
            {
                factorial *= j;
            }
        }
    }
    else
    {
        factorial = 1;
    }


    printf("%d\n", factorial);

    return 0;
}