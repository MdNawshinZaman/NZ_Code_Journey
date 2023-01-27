#include<stdio.h>

int main(void)
{
    float sal, n, s, m ,l, tax, small, medium, large;
    scanf("%f",&sal);

    sal>2000? goto tax : goto tax_free;

tax:
    n = sal - 2000.00;
    s = sal - 3000.00;
    m =


    n > 1000? small = 1000 * 0.08 : small = s *0.08;


    tax = (s*0.08)+(m*0.18)+(l*0.28);
    printf("R$ %.2f\n", tax);

tax_free:
    printf("Isento\n");
    return 0;
}