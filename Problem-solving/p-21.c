#include<stdio.h>
#include<math.h>

int main(void)
{
     double b, p, R = 1; // if the value of R is not defined as 1, you will get the ans 0
    printf("Enter the Base: ");
    scanf("%lf", &b);
    printf("Enter a non fractional power: "); // this code can't handle fractional exponent
    scanf("%lf", &p);

    for (int i = 1; i <= p; i++)
    {
        R = R*b;
    }
    printf("Ans: %.lf\n", R);
}