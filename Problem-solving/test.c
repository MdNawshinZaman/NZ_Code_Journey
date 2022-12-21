#include<stdio.h>
#include<math.h>

int main(void)
{
    double b, p, R;
    printf("Enter the Base: ");
    scanf("%lf", &b);
    printf("Enter the exponent: ");
    scanf("%lf", &p);
    R = pow(b, p);
    printf("Ans of power: %lf\n", R);
    return 0;
}