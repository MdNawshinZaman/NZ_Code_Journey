#include<stdio.h>
#include<math.h>

int main(void)
{
     double b, p = 0, R;
    printf("Enter the Base: ");
    scanf("%lf", &b);
    printf("Enter a non fractional power: ");
    scanf("%lf", &p);

    for (int i = 0; i < p; i++)
    {
        R = b*b;
    }

    printf("Ans: \n");
}