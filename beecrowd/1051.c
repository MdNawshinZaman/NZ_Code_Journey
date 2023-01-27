#include<stdio.h>

int main(void)
{
    float sal, n, s, m ,l, tax;
    scanf("%f",&sal);

    //4520.00

    n = sal - 2000.00; // 2520.00
    sal = sal - n; // 2520.00

//1000, 1500, 20



    tax = (n*0)+(s*0.08)+(m*0.18)+(l*0.28);

    printf("R$ %.2f\n", tax);

    return 0;
}