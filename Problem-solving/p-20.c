#include<stdio.h>
#include<math.h>

/*int main(void)
{
    double b, p, R;
    printf("Enter the Base: ");
    scanf("%lf", &b);
    printf("Enter the power: ");
    scanf("%lf", &p);
    R = pow(b, p);
    printf("Ans: %lf\n", R);
    return 0;
}*/

double NZ (double base, double power);
int main(void)
{
    double b, p, R;
    printf("Enter the Base: ");
    scanf("%lf", &b);
    printf("Enter the power: ");
    scanf("%lf", &p);

    R = NZ(b, p);

    printf("Your Ans is: %lf\n", R);
}



double NZ (double base, double power)
{
    return pow(base, power);
}