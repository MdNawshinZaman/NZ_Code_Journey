#include<stdio.h>
#include<math.h>

int main(void)
{
     double b, p, R = 0;
    printf("Enter the Base: ");
    scanf("%lf", &b);
    printf("Enter a non fractional power: ");
    scanf("%lf", &p);

    for (int i = 1; i <= p; i++) //p-3, b-2, Ans: 8
    {
        R = R + b*b;
    }

    printf("Ans: %.lf\n", R);
}