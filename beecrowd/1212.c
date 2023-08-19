#include <stdio.h>
#include <math.h>


int main(void)
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    int num_carry = 0, carry = 0;

    int x = a % 10;
    int y = b % 10;

    if (x + y + carry >= 10)
    {
        num_carry++;
        carry = 1;
    }
    else
    {
        carry  = 0;
    }


    return 0;
}