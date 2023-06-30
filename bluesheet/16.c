#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    char str[22];

    scanf("%d", &n);
    fflush(stdin);
    getch();
    scanf("%s", str);

    int k = strlen(str);
    int z = n % k;

    int fact = n;

    if(z != 0)
    {
        for(int i = n - k; i >= z; i -= k)
        {
            fact *= i;
        }
    }
    else
    {
        for(int i = n - k; i >= k; i -= k)
        {
            fact *= i;
        }
    }

    printf("%d\n", fact);

    return 0;
}