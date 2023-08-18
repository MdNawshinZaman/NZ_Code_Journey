#include <math.h>
#include <stdio.h>

int gcd(f1, f2)
{
    int temp;
    if (f1 < f2)
    {
        temp = f1;
        f1 = f2;
        f2 = temp;
    }

    int rem;
    while(f2 != 0)
    {
        rem = f1 % f2;
        f1 = f2;
        f2 = rem;
    }
    return f1;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int f1, f2;
        scanf("%d %d", &f1, &f2);
        printf("%d\n",gcd(f1, f2));
    }

    return 0;
}