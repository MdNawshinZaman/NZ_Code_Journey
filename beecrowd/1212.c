#include <math.h>
#include <stdio.h>

int main(void)
{
    long long a, b;
    while (1)
    {
        scanf("%lld %lld", &a, &b);
        if(a == 0 && b == 0) break;

        int num_carry = 0, carry = 0;

        while (a == 0 && b == 0)
        {
            int x = a % 10;
            int y = b % 10;

            if (x + y + carry >= 10)
            {
                num_carry++;
                carry = 1;
            }
            else
            {
                carry = 0;
            }

            a /= 10;
            b /= 10;
        }

        if (num_carry == 0)
            printf("No carry operation.\n");
        else if (num_carry == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", num_carry);
    }

    return 0;
}