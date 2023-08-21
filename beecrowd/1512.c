#include <math.h>
#include <stdio.h>
#include <string.h>

int gcd(int a, int b)
{
    /*if (b == 0)
        return a;
    int r = a % b;
    return gcd(b, r);*/

    return (b == 0)? a: gcd(b, a%b);
}

int main(void)
{
    int n, a, b;
    while (1)
    {
        scanf("%d %d %d", &n, &a, &b);
        if (n == 0 && a == 0 && b == 0)
            break;

        int temp;
        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        int lcm = (a*b) / gcd(a, b);
        printf("%d\n", (n / a) + (n / b) - (n /lcm));
    }

    return 0;
}