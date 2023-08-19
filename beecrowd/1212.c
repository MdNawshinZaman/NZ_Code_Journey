#include <stdio.h>
#include <math.h>


int main(void)
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    int num_carry = 0, carry = 0;

    int temp;
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    

    return 0;
}