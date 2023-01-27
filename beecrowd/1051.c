#include<stdio.h>

int main(void)
{
    float sal, n, s, m ,l, tax;
    scanf("%f",&sal);

    sal>2000? goto tax : goto tax_free;

tax:
    

    tax = (n*0)+(s*0.08)+(m*0.18)+(l*0.28);
    printf("R$ %.2f\n", tax);

tax_free:
    printf("Isento\n");
    return 0;
}