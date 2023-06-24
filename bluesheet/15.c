#include<stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    int sum = 0;
    if(a <= 0)
    {
        for(int i = 1; i >= a; i--)
        {
            sum += i;
        }
    }
    else
    {
        for(int i = 1; i <= a; i++)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);
    return 0;
}