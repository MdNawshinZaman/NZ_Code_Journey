#include <stdio.h>

int factorial(int n)
{
    if(n == 1) return 1;
    return n * factorial(n-1);
}

int main(void)
{
    //printf("%d\n", factorial(4));

    int i = 1;
    int num;
    scanf("%d", &num);

    int count = 0;
    while(num != 0)
    {
         if(factorial(i) > num)
         {
             count++;
             num -= factorial(i-1);
             i = 0;
         }
         i++;
    }

    printf("%d\n", count);

    return 0;
}
