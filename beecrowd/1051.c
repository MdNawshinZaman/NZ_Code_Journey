#include<stdio.h>

int main(void)
{
    float sal, n, s, m ,l, tax, small, medium, large;
    scanf("%f",&sal);

    sal>2000? goto tax : goto tax_free;
//
tax:
    s = sal - 2000.00; //
    m = sal - 3000.00; //
    l = sal - 4500.00; //



    s > 1000? small = 1000 * 0.08 : small = s *0.08; //
    m > 1500? medium = 1500 * 0.18 : medium = m * 0.18;
    large = l * 0.28;

    tax = small + medium + large;

    printf("R$ %.2f\n", tax);

tax_free:
    printf("Isento\n");
    return 0;
}