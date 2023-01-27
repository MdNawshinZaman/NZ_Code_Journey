#include<stdio.h>

int main(void)
{
    float sal, n, s, m ,l, tax;
    scanf("%f",&sal);

    //3002.00

    n = sal - 2000.00; // 1002.00
    sal = sal - n;

    s = sal - 1000.00;
    sal = sal - s;

    m = sal - 1500.00;
    sal = sal - m;

    l = sal;

    tax = (n*0)+(s*0.08)+(m*0.18)+(l*0.28);

    printf("R$ %.2f\n", tax);

    return 0;
}